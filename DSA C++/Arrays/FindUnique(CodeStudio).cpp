#include<iostream>
using namespace std;

int findUnique(int arr[],int n){
    int ans = 0;
    for (int i = 0; i < n;i++){
        ans = ans ^ arr[i];  // here we are doing xor of all elements to find the unique element
    } 

    return ans;
}

int main(){
    int arr[7] = {2, 3, 2, 1, 3, 1, 7};

    cout << findUnique(arr, 7) << endl;

    return 0;
}