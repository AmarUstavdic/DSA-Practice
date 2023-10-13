#include "OrderedList.hpp"
#include <iostream>

OrderedList::OrderedList() : head(nullptr) {}

OrderedList::~OrderedList() {
    while (head) {
        Node* temp = head;
        head = head->tail;
        delete temp;
    }
}

void OrderedList::insert(int key) {
    Node* node = new Node;
    node->key = key;
    node->tail = nullptr;

    if (head == nullptr || head->key >= key) {
        node->tail = head;
        head = node;
        return;
    }

    Node* current = head;
    while (current->tail != nullptr && current->tail->key < key) {
        current = current->tail;
    }

    node->tail = current->tail;
    current->tail = node;
}


bool OrderedList::find(int key) {
    Node* current = head;
    while (current) {
        if (current->key == key) return true;
        if (current->key > key) return false;
        current = current->tail;
    }
    return false;
}

bool OrderedList::remove(int key) {
    if (head == nullptr) return false;
    if (head->key == key) {
        Node* temp = head;
        head = head->tail;
        delete temp;
        return true;
    }
    Node* current = head;
    Node* previous = nullptr;
    while (current != nullptr) {
        if (current->key == key) {
            previous->tail = current->tail;
            delete current;
            return true;
        } else if (current->key > key) {
            /* 
                This list is ordered, so in the event of encoutering the key
                that is grater than the key that we want to remove, we can simply
                stop at this point since this means that our key does not
                exist in our data structure.
            */
            return false;
        }
        previous = current;
        current = current->tail;
    }
    return false;  // We came to the end of the list, no matching key found, so return false
}

void OrderedList::print() {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->key << " ";
        current = current->tail;
    }
    std::cout << std::endl;
}