#include<iostream>
using namespace std;

void countZeroAndOne(int nums [], int size){
    int zeroCount = 0;
    int oneCount = 0;

    for(int i = 0; i < size; i++){
        if(nums[i] == 0){
            zeroCount++;
        }
        if(nums[i] == 1){
            oneCount++;
        }
    }

    cout<< "Zero Count: " << zeroCount << endl;
    cout<< "One Count: " << oneCount << endl;
}

int main(){
    int nums [] = {0,1,0,1,1,0,0,1,1,1,1,0,1,0,0,0,0,1,1,0,1,0,1,1,0,0,1,0,1};

    // zero: 14
    //one: 15
    int size = 29;
    countZeroAndOne(nums, size);
}