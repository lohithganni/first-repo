#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    
    for(int i=0;i<size;i++){
        arr[i]++;
    }
    return;
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    printArray(myArray, size);
    for(int i=0;i<size;i++){
        cout<<myArray[i]<<endl;
    }
    return 0;
}
