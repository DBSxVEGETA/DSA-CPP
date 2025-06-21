#include<iostream>
using namespace std;

void printTriplets(int nums[], int size){
    for(int i = 0; i< size ; i++){
        for(int j = 0; j < size; j++){
            for(int k = 0; k<size; k++){
                cout << nums[i] << "," << nums[j] << "," << nums[k] << endl;
            }
        }
    }
}

int main(){
    int nums [4] = {1,2,3,4};
    int size = 4;

    printTriplets(nums, size);
}