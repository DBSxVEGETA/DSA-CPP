#include <iostream>
using namespace std;

void findArrayIntersection(int arr1[],int n , int arr2[], int m){


    // This code will work but it will give a TL exceeded (Time Limit Exceeded)

    // for (int i = 0; i < n; i++){
    //     int element = arr1[i];

    //     for (int j = 0; j < m; j++){
    //         if(element==arr2[j]){
    //             cout << element << " ";
    //             arr2[j] = INT_MIN;
    //             break;
    //         }
    //     }
    // }

    // A little better code 

    int i = 0, j = 0;

    while(i<n&&j<m){

        if(arr1[i]==arr2[j]){
            cout<<arr1[i] << " ";
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }

        else if(arr1[i]>arr2[j]){
            j++;
        }
    }
}

int main(){

    int arr1[6] = {1, 2, 2, 2, 3, 4};
    int arr2[4] = {2, 2, 3, 3};

    findArrayIntersection(arr1, 6, arr2, 4);

    return 0;
}
