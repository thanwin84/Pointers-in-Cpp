#include <iostream>
using namespace std;
void print(void *ptr, char type){
    if (type == 'i'){
        cout << *((int*)ptr) << endl;
    }
    else if(type == 'c'){
        cout << *((char*)ptr) << endl;
    }
}
int main() {
    int number = 10;
    char letter = 'A';
    print(&number, 'i');
    print(&letter, 'c');

    return 0;
}
