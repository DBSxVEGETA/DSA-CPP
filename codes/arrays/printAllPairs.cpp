#include<iostream>
using namespace std;

void printAllPairs(int nums [], int size){
    for(int i = 0; i<size; i++){
        for(int j = 0; j < size; j++){
            cout << nums[i] << " " << nums[j] << endl;
        }
    }
}

int main(){
    int nums [3] = {10,20,30};
    int size = 3;

    printAllPairs(nums, size);
}