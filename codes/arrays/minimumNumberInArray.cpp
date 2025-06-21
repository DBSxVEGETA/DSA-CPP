#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;

void minimumInArray(int nums[], int size){

    int minAns = INT_MAX;

    for(int i = 0; i<size; i++){
        if(nums[i]<minAns){
            minAns = nums[i];
        }
    }

    cout << "Minium number in array is: " <<minAns << endl;

}

int main(){
    int nums[] = {17,21,3,46,9,-51,1,8,10};
    int size = 9;

    minimumInArray(nums, size);
}