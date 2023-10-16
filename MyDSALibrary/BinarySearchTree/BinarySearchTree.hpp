#ifndef BINARY_SEARCH_TREE_HPP
#define BINARY_SEARCH_TREE_HPP
#include<vector>

class Node {
public:
    int key;
    Node* left;
    Node* right;
};

class BinarySearchTree {
public:
    Node* root;

    BinarySearchTree();
    ~BinarySearchTree();

    void insert(int key);
    bool find(int key);
    bool remove(int key);

    void preorder();
    void inorder();
    void postorder();

    void iterPreorder();
    void iterInorder();
    void iterPostorder();

    void preorder_v(std::vector<int>& v);

    void levelOrder();
    void reverseInorder();
    void iterReverseInorder();

    int height();


private:

    void recDestroy(Node* node);

    void recPreorder(Node* node);
    void recInorder(Node* node);
    void recPostorder(Node* node);
    void recPreorder(std::vector<int>& v, Node* node);

    void recRevInorder(Node* node);

    int recHeight(Node* node);

};

#endif