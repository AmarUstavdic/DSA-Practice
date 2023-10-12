#include <iostream>
//#include "./MyDSALibrary/UnorderedList/UnorderedList.hpp"
#include "./MyDSALibrary/OrderedList/OrderedList.hpp"
using namespace std;


int main(){

    OrderedList ol;

    int N = 10, range = 20, min = 1;
    for (int i = 0; i < N; i++) {
        int random_number = rand() % range + min;
        cout << random_number << " ";
        ol.insert(random_number);
    }
    cout << endl;
    
    ol.print();


    for (int i = 0; i < N; i++) cout << "find(" << i << "): " << boolalpha << ol.find(i) << endl; 

    cout << "Deleting: " << endl;
    for (int i = 0; i < N; i++) cout << "remove(" << i << "): " << boolalpha << ol.remove(i) << endl; 
    



    return 0;    
}
