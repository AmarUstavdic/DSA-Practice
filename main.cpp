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


    bst.postorder();


    cout << endl;

    cout << "PREORDER: "; bst.iterPreorder();
    cout << "INORDER: " ; bst.iterInorder();
    cout << "POSTORDER: "; bst.iterPostorder();


    cout << endl;
    cout << "Height: " << bst.height() << endl;



    cout << "Level order: "; bst.levelOrder();


    bst.reverseInorder();


    cout << "REVERSE INORDER: " ; bst.iterReverseInorder();

    cout << boolalpha << bst.find(28) << endl;
    cout << boolalpha << bst.find(-1) << endl;
    cout << boolalpha << bst.find(4) << endl;
    cout << boolalpha << bst.find(23) << endl;
    cout << boolalpha << bst.find(19) << endl;
    cout << boolalpha << bst.find(2) << endl;



    return 0;    
}
