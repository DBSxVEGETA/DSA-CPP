#include<iostream>
using namespace std;

void swapAlternate(int arr[],int n){

    for (int i = 0; i < n;i=i+2){
        if(i+1<n){
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[],int size){
    for (int i = 0; i < size;i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
}

int main (){
    int arr[6] = {2, 4, 5, 6, 4, 3};
    int brr[5] = {7, 6, 1, 4, 9};

    swapAlternate(arr, 6);
    printArray(arr, 6);

    swapAlternate(brr, 5);
    printArray(brr, 5);

    return 0;
}