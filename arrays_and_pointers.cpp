#include <iostream>
using namespace std;
int main(){
    int A[] = {1, 2, 3, 4};
    cout << "address of first element in array: " << A << endl;
    cout << "address of first element in array: " << &A[0] << endl;
    cout << "value of first element in the array: " << *A << endl;
    cout <<"2nd elemtent of array: " << *(A+1) << endl;
    cout << *(A+2) << endl;
    int *p = A;
    for (int i = 0; i < 4; i++){
        cout << *p << " ";
        *p += 1;
    }
    return 0;
}
