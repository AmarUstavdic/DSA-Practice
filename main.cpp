#include <iostream>
#include "./MyDSALibrary/UnorderedList/UnorderedList.hpp"
using namespace std;


int main(){
    

    UnorderedList ul;

    for (int i = 0; i < 10; i++) ul.insert(i);

    ul.print();

    



    return 0;    
}
