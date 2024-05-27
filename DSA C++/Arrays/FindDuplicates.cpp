#include<iostream>
using namespace std;

//     brute force solution 
// void findDuplicate(int arr[],int size){
//     for (int i = 0; i < size;i++){
//         int count = 0;
//         for (int j = i + 1; j < size;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if(count>=1){
//             cout << arr[i] << " ";
//         }
//     }
// }


// optimised solution for finding duplicate
int findDuplicate(int arr[],int size){
    int ans = 0;
    // xor all the elements of array
    for (int i = 0; i < size;i++){
        ans = ans ^ arr[i];
    }
    // xor all the elements of array with number from 1 to (size-1)
    for (int i = 1; i < size;i++){
        ans = ans ^ i;
    }
    return ans;
}


int main(){
    int arr[6] = {5,1,2,3,4,2};
    int brr[9] = {8,7,2,5,4,7,1,3,6};

    cout << findDuplicate(arr, 6);
    cout << endl;
    cout << findDuplicate(brr, 9) << endl;

    return 0;
}