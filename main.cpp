#include <iostream>
using namespace std;
void increment(int *p){
    *p = *p + 1;
    cout << "address of p: " << p << endl;
}
int main() {
    int a = 10;
    increment(&a); // address of a in memory paased 
    cout << "address of a: " << &a << endl;
    cout << a << endl;
    return 0;
}
