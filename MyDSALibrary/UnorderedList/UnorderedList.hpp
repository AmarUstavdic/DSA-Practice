#ifndef UNORDEREDLIST_HPP
#define UNORDEREDLIST_HPP

class Node {
public:
    int key;
    Node* tail;
};

class UnorderedList {
public:
    Node* head;

    UnorderedList();
    ~UnorderedList();
    
    void insert(int key);
    bool find(int key);
    bool remove(int key);
    void print();
};

#endif
