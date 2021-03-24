#include <iostream>
using namespace std;
void Double(int* arr, int size){
    int i = 0;
    for (i; i < size; i++){
        arr[i] += 2;
    }
}
int main(){
    int A[] = {1, 2, 3, 4};
    int size = sizeof(A)/ sizeof(A[0]);
    Double(A, size);
    for (int i = 0; i < size; i++){
        cout << A[i] << " ";
    }

    return 0;
}
