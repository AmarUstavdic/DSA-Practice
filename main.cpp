#include <iostream>
//#include "./MyDSALibrary/UnorderedList/UnorderedList.hpp"
//#include "./MyDSALibrary/OrderedList/OrderedList.hpp"
#include "./MyDSALibrary/BinarySearchTree/BinarySearchTree.hpp"
#include <vector>


using namespace std;



int main(){

    BinarySearchTree bst;
    bst.insert(2);
    bst.insert(1);

    cout << boolalpha << bst.remove(4) << endl;
    cout << boolalpha << bst.remove(2) << endl;
    cout << boolalpha << bst.remove(4) << endl;
    cout << boolalpha << bst.remove(4) << endl;
    cout << boolalpha << bst.remove(4) << endl;
    cout << boolalpha << bst.remove(1) << endl;
    


    return 0;    
}
