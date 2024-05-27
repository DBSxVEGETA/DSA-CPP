#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// brute force solution 
// void findAllDuplicates(int arr[],int n){
//     sort(arr, arr + n);
//     for (int i = 0; i < n;i++){
//         int count = 0;
//         for (int j = i + 1; j < n; j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if(count>=1){
//             cout << arr[i] << " ";
//         }
//     }
// }

// two pointer solution

void findAllDuplicates(int arr[],int n){
    sort(arr, arr+n);
    bool found = false;
    for (int i = 0; i < n;i++){
        int low = i;
        int high = n - 1;
        while(low<high){
            if(arr[low] == arr[high]){
                cout << arr[low] << " ";
                found = true;
                low++;
            }
            else{
                high--;
            }
        }
    }
    if(!found){
        cout << -1 << endl;
    }
}

int main (){
    int arr[8] = {4, 3, 2, 7, 8, 2, 3, 1};

    findAllDuplicates(arr, 8);

    return 0;
} 