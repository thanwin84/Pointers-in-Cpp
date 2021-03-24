#include <iostream>
using namespace std;

int main() {
    int a = 100;
    int *p = &a;
    int **q = &p;
    int ***r = &q;
    cout << "address of a: " << &a << endl;
    cout << "address of p: " << &p << endl;
    cout << "address of r: " << &r << endl;
    cout <<  ***r << endl;

    return 0;
}
