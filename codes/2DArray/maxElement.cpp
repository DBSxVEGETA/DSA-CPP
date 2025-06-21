#include<iostream>
#include<limits.h>
using namespace std;

void findMax (int arr[][4], int row, int column){

    int maxElement = INT_MIN;

    for(int i=0; i<row; i++){
        for(int j =0; j<column; j++){
            if(arr[i][j] > maxElement ){
                maxElement = arr[i][j];
            }

        }
    }

    cout << maxElement << endl;
}

int main(){
    int arr[][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    int row = 3;
    int column  = 4;

    findMax(arr, row, column);
}