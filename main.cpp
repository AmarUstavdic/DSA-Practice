#include <iostream>
//#include "./MyDSALibrary/UnorderedList/UnorderedList.hpp"
//#include "./MyDSALibrary/OrderedList/OrderedList.hpp"
#include "./MyDSALibrary/BinarySearchTree/BinarySearchTree.hpp"
#include <vector>


using namespace std;



int main(){

    BinarySearchTree bst;

    for (int i = 0; i < 1; i++) {
        //int rnd = rand() % 20;
        bst.insert(i);
    }

    bst.preorder();
    bst.inorder();

    vector<int> v;
    bst.preorder_v(v);

    // reconstructing a tree
    BinarySearchTree reconstructedBst;
    for (int n : v) reconstructedBst.insert(n);
    reconstructedBst.preorder();

    cout << "Height: " << bst.height() << endl;



    return 0;    
}
