#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n, int k){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid]>k){
            e = mid - 1;
        }
        else if(arr[mid]<k){
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOccurence(int arr[], int n , int k){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == k){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid]<k){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}


int totalOccurence(int arr[]){

 int totalOccurence = lastOccurence(arr, 6, 3) - firstOccurence(arr, 6, 3) + 1;

 return totalOccurence;
}

int main(){
    int arr[6] = {1, 2, 3, 3, 3, 4};
    cout << "First Occurence is at index " << firstOccurence(arr, 6, 3)<< endl;
    cout << "Last Occurence is at index " << lastOccurence(arr, 6, 3)<< endl;
    cout << "Total Occurence is " << totalOccurence(arr)<< endl;
}