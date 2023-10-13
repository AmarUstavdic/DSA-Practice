#include "BinarySearchTree.hpp"
#include <iostream>
#include <vector>

BinarySearchTree::BinarySearchTree() : root(nullptr) {}

BinarySearchTree::~BinarySearchTree() {
    recDestroy(root);
}

// auxilary function that helps destructor free memory recursively
void BinarySearchTree::recDestroy(Node* node) {
    if (node) {
        recDestroy(node->left);
        recDestroy(node->right);
        delete node;
    }
}


void BinarySearchTree::insert(int key) {
    Node* node = new Node;
    node->key = key;
    node->left = nullptr;
    node->right = nullptr;

    if (root == nullptr) {
        root = node;
        return;
    }

    Node* current = root;
    while (true) {
        if (current->key == key) return; // to not have duplicate keys
        if (current->key < key) {
            if (!current->right) {
                current->right = node;
                return;
            } else {
                current = current->right;
            }
        } else {
            if (!current->left) {
                current->left = node;
                return;
            } else {
                current = current->left;
            }
        }
    } 
}

// this needs to be fixed!!!!
bool BinarySearchTree::find(int key) {
    Node* current = root;
    while(current) {
        if (key == current->key) return true;
        if (key < current->key) current = current->left;
        if (key > current->key) current = current->right;
    }
    return false;
}

bool BinarySearchTree::remove(int key) {

    return false;
}



void BinarySearchTree::preorder() {
    std::cout << "PREORDER: ";
    recPreorder(root);
    std::cout << std::endl;
}

void BinarySearchTree::preorder_v(std::vector<int>& v) {
    recPreorder(v, root);
}

void BinarySearchTree::recPreorder(Node* node) {
    if (node) {
        std::cout << node->key << " ";
        recPreorder(node->left);
        recPreorder(node->right);
    }
}

void BinarySearchTree::recPreorder(std::vector<int>& v, Node* node) {
    if (node) {
        v.push_back(node->key);
        recPreorder(v, node->left);
        recPreorder(v, node->right);
    }
}


void BinarySearchTree::inorder() {
    std::cout << "INORDER: ";
    recInorder(root);
    std::cout << std::endl;
}

void BinarySearchTree::recInorder(Node* node) {
    if (node) {
        recInorder(node->left);
        std::cout << node->key << " ";
        recInorder(node->right);
    }
}



int BinarySearchTree::height() {
    return recHeight(root);
}

int BinarySearchTree::recHeight(Node* node) {
    if (node) return std::max(recHeight(node->left),recHeight(node->right)) + 1;
    return 0;
}



