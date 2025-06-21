#include<iostream>
using namespace std;

void sortZeroAndOne(int nums [], int size){
    int zeroCount = 0;
    int oneCount = 0;

    for(int i = 0; i< size ; i++){
        if(nums[i] == 0){
            zeroCount++;
        }
        if(nums[i]==1){
            oneCount++;
        }
    }

    for(int i = 0; i<zeroCount; i++){
        nums[i] = 0;
    }

    for(int j = zeroCount; j < size; j++){
        nums[j] = 1;
    }

    for(int i = 0; i<size; i++){
        cout << nums[i] << " ";
    }
}

int main(){
    int nums [20] = {0,1,1,0,1,0,0,1,1,1,0,0,1,0,1,0,1,1,0,0};
    int size = 20;
    
    sortZeroAndOne(nums, size);
}