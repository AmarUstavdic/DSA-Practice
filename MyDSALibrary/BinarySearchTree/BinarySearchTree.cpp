#include "BinarySearchTree.hpp"
#include <iostream>
#include <vector>
#include <stack>
#include <queue>

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



bool BinarySearchTree::find(int key) {
    Node* current = root;
    while (current) {
        if (key == current->key) {
            return true;
        } else {
            if (key < current->key) {
                if (current->left) {
                    current = current->left;
                } else {
                    return false;
                }
            } else {
                if (current->right) {
                    current = current->right;
                } else {
                    return false;
                }
            }
        }
    }
    return false;
}




bool BinarySearchTree::remove(int key) {
    
    if (!root) return false;

    Node* parent = nullptr;
    Node* current = root;
    // First, find the node to remove and its parent
    while (current != nullptr && current->key != key) {
        parent = current;
        if (key < current->key) {
            current = current->left;
        } else {
            current = current->right;
        }
    }

    if (!current) return false; // Node with the given key doesn't exist

    // Case 1: Node with two children
    if (current->left && current->right) {
        // Find the in-order successor
        Node* successorParent = current;
        Node* successor = current->right;
        while (successor->left != nullptr) {
            successorParent = successor;
            successor = successor->left;
        }
        current->key = successor->key;
        current = successor;
        parent = successorParent;
    }

    // Case 2 & 3: Node with zero or one child
    Node* child = (current->left) ? current->left : current->right;
    if (current != root) {
        if (parent->left == current) {
            parent->left = child;
        } else {
            parent->right = child;
        }
    } else {
        root = child; // If it's root, the child becomes the new root
    }
    delete current; // Delete the node from the memory
    return true;
}




void BinarySearchTree::iterPreorder() {
    if (!root) return;

    std::stack<Node*> s;
    s.push(root);

    while (!s.empty()) {
        Node* current = s.top();
        s.pop();

        std::cout << current->key << " ";

        if (current->right) s.push(current->right);
        if (current->left) s.push(current->left);
    }
    std::cout << std::endl;
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







void BinarySearchTree::iterInorder() {
    std::stack<Node*> s;
    Node* current = root;

    while (!s.empty() || current) {
        while (current) {
            s.push(current);
            current = current->left;
        }

        current = s.top();
        s.pop();

        std::cout << current->key << " ";

        current = current->right;
    }
    std::cout << std::endl;
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






void BinarySearchTree::iterPostorder() {
    std::stack<Node*> s;
    Node* current = root;
    Node* lastVisited = nullptr;

    while (!s.empty() || current) {
        if (current) {
            s.push(current);
            current = current->left;
        } else {
            Node* peekNode = s.top();
            if (peekNode->right && lastVisited != peekNode->right) {
                current = peekNode->right;
            } else {
                std::cout << peekNode->key << " ";
                lastVisited = peekNode;
                s.pop();
            }
        }
    }
    std::cout << std::endl;
}


void BinarySearchTree::postorder() {
    std::cout << "POSTORDER: ";
    recPostorder(root);
    std::cout << std::endl;
}

void BinarySearchTree::recPostorder(Node* node) {
    if (node) {
        recPostorder(node->left);
        recPostorder(node->right);
        std::cout << node->key << " ";
    }
}



void BinarySearchTree::levelOrder() {
    if (!root) return;
    std::queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
        int nodesAtCurrentLevel = q.size();
        
        for (int i = 0; i < nodesAtCurrentLevel; ++i) {
            Node* current = q.front();
            q.pop();
            
            std::cout << current->key << " ";
            
            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
        
        std::cout << std::endl;  // Print a newline after each level
    }
}






void BinarySearchTree::reverseInorder() {
    std::cout << "REVERSE INORDER: ";
    recRevInorder(root);
    std::cout << std::endl;
}

void BinarySearchTree::recRevInorder(Node* node) {
    if (node) {
        recRevInorder(node->right);
        std::cout << node->key << " ";
        recRevInorder(node->left);
    }
}



void BinarySearchTree::iterReverseInorder() {
	std::stack<Node*> s;
	Node* current = root;
	while (!s.empty() || current) {
		while (current) {
			s.push(current);
			current = current->right;
		}
		current = s.top();
		s.pop();
		
		std::cout << current->key << " ";
		current = current->left;
	}
    std::cout << std::endl;
}







int BinarySearchTree::height() {
    return recHeight(root);
}

int BinarySearchTree::recHeight(Node* node) {
    if (node) return std::max(recHeight(node->left),recHeight(node->right)) + 1;
    return 0;
}



