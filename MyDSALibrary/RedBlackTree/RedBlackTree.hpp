#ifndef RED_BLACK_TREE_HPP
#define RED_BLACK_TREE_HPP

class Node {
public:

    int key;
    Node* left;
    Node* right;
    char color;
    Node* parent;

    Node(int key);
    ~Node();

};

class RedBlackTree {
public:

    Node* root;
    
    // rotation flags
    bool ll; // left left
    bool rr; // right right 
    bool rl; // right left 
    bool lr; // left right

    RedBlackTree();
    ~RedBlackTree();
    
    void insert(int key);
    bool find(int key);
    bool remove(int key);


};

#endif