#include <iostream>
using namespace std;

int main() {
    int a = 100;
    int *p = &a;
    cout << a << endl;
    cout << "address of a in memory: " << & a<< endl; // adress of a in memory
    cout <<"address of p in memory: "<< & p << endl; // address of p in memory
    cout << "address of a pointed by p : " << p << endl; // address of a pointed by p
    cout << "value at address  pointed by p: "<<*p << endl;
    * p = 200; // dereferencing
    cout << "after changing a: " << a << endl;
    cout << *p << endl;
    int b = 20;
    *p =  b; // only value is modified and p still points to a
    cout << *p << endl;
    cout << p << endl; 
    cout << a << endl; // now a becomes 20
    cout << *p << endl;

    return 0;
}
