#include<iostream>
using namespace std;

void sortZeroAndOne(int arr[], int n){
    int left = 0;
    int right = n-1;

    while(left<right){
        if(arr[left]==0 && left<right){
            left++;
        }
        if(arr[right]==1 && left<right){
            right--;
        }
        if(arr[left]==1&&arr[right]==0 && left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i< n; i++){
        cout << arr[i];
    }
}

int main(){
    int arr[8] = {1,0,1,0,1,1,1,0};

    sortZeroAndOne(arr,8);
    printArray(arr,8);

    return 0;
}