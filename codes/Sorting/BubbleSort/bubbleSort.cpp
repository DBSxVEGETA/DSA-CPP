#include<iostream>
#include<algorithm>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int i = 0; i<size - 1; i++){
        for(int j = 0; j < size-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i = 0; i<size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    // int arr[5] = {5,4,3,2,1}
    int arr[5] = {1,55,8,96,24};
    int size = 5;

    bubbleSort(arr,size);
}