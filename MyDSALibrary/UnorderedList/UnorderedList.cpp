#include "UnorderedList.hpp"
#include <iostream>

UnorderedList::UnorderedList() : head(nullptr) {}

UnorderedList::~UnorderedList() {
    while (head) {
        Node* temp = head;
        head = head->tail;
        delete temp;
    }
}

void UnorderedList::insert(int key) {
    Node* node = new Node;
    node->key = key;
    node->tail = head;
    head = node;
}

bool UnorderedList::find(int key) {
    Node* current = head;
    while (current != nullptr) {
        if (current->key == key) return true;
        current = current->tail;
    }
    return false;
}

bool UnorderedList::remove(int key) {
    if (head == nullptr) return false;
    if (head->key == key) {
        Node* temp = head;
        head = temp->tail;
        delete temp;
        return true;
    }
    Node* current = head;
    while (current->tail != nullptr) {
        if (current->tail->key == key) {
            Node* temp = current->tail;
            current->tail = current->tail->tail;
            delete temp;
            return true;
        }
        current = current->tail;
    }
    return false;
}

void UnorderedList::print() {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->key << " ";
        current = current->tail;
    }
    std::cout << std::endl;
}
