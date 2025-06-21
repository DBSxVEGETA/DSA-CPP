#include<iostream>
#include<algorithm>
using namespace std;

void reverseArray(int nums [], int size){

    int a = 0; 
    int b = size - 1;

    while(a<=b){
        swap(nums[a], nums[b]);
        a++;
        b--;
    }

    // // using for loop
    // for(int left = 0, right = size -1; left <= right; left ++, right--){
    //     swap(nums[left], nums[right]);
    // }

    for(int i = 0; i < size ; i++){
        cout << nums [i] << " "; 
    }

}

int main(){
    int nums [] = {1,2,3,4,5,6,7,8,9};
    int size = 9;

    reverseArray(nums, size);
}
