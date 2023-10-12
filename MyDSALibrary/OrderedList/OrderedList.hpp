#ifndef ORDEREDLIST_HPP
#define ORDEREDLIST_HPP

class Node {
public:
    int key;
    Node* tail;
};

class OrderedList {
public:
    Node* head;

    OrderedList();
    ~OrderedList();

    void insert(int key);
    bool find(int key);
    bool remove(int key);
    void print();
};












#endif