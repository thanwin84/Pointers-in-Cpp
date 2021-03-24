#include <iostream>
using namespace std;
//uisng void pointer
void print(void *ptr, char type){
    if (type == 'i'){
        cout << *((int*)ptr) << endl;
    }
    else if(type == 'c'){
        cout << *((char*)ptr) << endl;
    }
}
int getMin(int arr[],int size){
    int _min = arr[0];
    for (int i= 1; i < size; i++){
        if (arr[i] < _min){
            _min = arr[i];
        }
    }
    return _min;
}
int getMax(int arr[],int size){
    int _max = arr[0];
    for (int i= 1; i < size; i++){
        if (arr[i] > _max){
            _max = arr[i];
        }
    }
    return _max;
}
//getting multiple value by using pointer
void getMinMax(int arr[],int size, int *min, int *max){
    for (int i= 1; i < size; i++){
        if (arr[i] > *max){
            *max = arr[i];
        }
        if (arr[i] < *min){
            *min = arr[i];
        }
    }

}
int main() {
    int number = 10;
//    char letter = 'A';
//    print(&number, 'i');
//    print(&letter, 'c');
    int data[] = {1, 2, 3, 4 ,-30};
//    cout << getMin(data, 5) << endl;
//    cout << getMax(data, 5) << endl;
    int min = data[0];
    int max = data[0];
    getMinMax(data, 5, &min, &max);
    cout << "min: " << min << " and max is: " << max<< endl;

    return 0;
}
