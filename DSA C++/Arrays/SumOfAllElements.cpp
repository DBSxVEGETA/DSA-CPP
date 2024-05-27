#include<iostream>
using namespace std;

void sumofElements(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size;i++){
        sum = sum + arr[i];
    }
    cout << "Sum of all elements of the Array is " << sum << endl;
}


int main(){

    int arr[5];

    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < 5;i++){
        cin >> arr[i];
    }

    sumofElements(arr, 5);

    return 0;
}