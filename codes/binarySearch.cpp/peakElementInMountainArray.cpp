#include<iostream>
using namespace std;

int findPeakElement(int arr [], int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start < end){
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }

    return mid;
}

int main(){
    int arr [5] = {10,20,50,40,30};
    int size = 5;

    cout << findPeakElement(arr, size);
}