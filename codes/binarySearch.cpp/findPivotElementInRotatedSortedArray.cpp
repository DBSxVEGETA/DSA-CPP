
// find the pivot element in rotated and sorted array. The peak elemnet here is the pivot element in the rotated and sorted array

#include<iostream>
using namespace std;

int findPivotElement(int arr[], int size){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start<=end){
        // when there is only single element
        if(start == end){
            return start;
        }
        else if(mid - 1 >= 0 && arr[mid] < arr[mid - 1]){
            return mid -1;
        }else if(mid + 1 < size && arr[mid]>arr[mid + 1]){
            return mid;
        }else if(arr[start] > arr[mid]){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }

    return -1;
}

int main(){
    int arr[8] = {12,14,16,2,4,6,8,10};
    int size = 8;

    cout << findPivotElement(arr, size);
}