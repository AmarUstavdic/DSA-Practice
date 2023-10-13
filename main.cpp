#include <iostream>
//#include "./MyDSALibrary/UnorderedList/UnorderedList.hpp"
//#include "./MyDSALibrary/OrderedList/OrderedList.hpp"
#include "./MyDSALibrary/BinarySearchTree/BinarySearchTree.hpp"
#include <vector>


using namespace std;



int main(){

    BinarySearchTree bst;

    for (int i = 0; i < 29; i++) {
        int rnd = rand() % 30;
        bst.insert(rnd);
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


    //cout << "find(" << bst.find(10) << ")" << endl;


    return 0;    
}
