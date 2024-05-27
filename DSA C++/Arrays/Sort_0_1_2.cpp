#include <iostream>
using namespace std;

void sortArray(int arr[], int n){
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
       else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    }


void printArray(int arr[],int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";

    }
}

int main (){
    int arr[9] = {0, 2, 2, 1, 0, 1, 1, 0, 2};

    sortArray(arr, 9);
    printArray(arr, 9);

    return 0;
}