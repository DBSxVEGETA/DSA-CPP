#include<iostream>
using namespace std;

bool linearSearch (int arr[][4], int row, int column, int target){
    for(int i=0; i<row; i++){
        for(int j =0; j<column; j++){
            if(arr[i][j] == target){
                return true;
            }

        }
    }

    return false;
}

int main(){
    int arr[][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    int row = 3;
    int column  = 4;
    int target = 11;

    cout << "Found or Not: " << linearSearch(arr, row, column, target) << endl;
}