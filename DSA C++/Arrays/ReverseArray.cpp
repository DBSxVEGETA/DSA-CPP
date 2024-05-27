#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int start = 0;
    int end = n - 1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--; 
    }
}

void printArray(int arr[],int size){
    for (int i = 0; i < size;i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int main (){
    int arr[5] = {3, 6, 5, 8, -9};
    int brr[5] = {9, 5, 7, -5, -2};

    reverse(arr, 5);
    reverse(brr, 5);

    printArray(arr, 5);
    printArray(brr, 5);

    return 0;
}