#include<iostream>
using namespace std;

void insertionSort(int arr[], int size){
    for(int i=1; i<size;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    for(int i = 0; i<size;i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main(){
    int arr[5] = {44,33,55,22,11};
    int size = 5;

    insertionSort(arr, size);
}