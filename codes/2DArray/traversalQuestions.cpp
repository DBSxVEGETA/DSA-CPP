#include<iostream>
#include<algorithm>
using namespace std;

void rowWiseSum(int arr[][4], int row, int col){

    for(int i = 0; i<row; i++){
        int sum = 0;
        for(int j = 0; j<col; j++){
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }

}

void colWiseSum(int arr[][4], int row, int col){
    for(int i = 0; i < col; i++){
        int sum = 0; 
        for(int j = 0; j < row; j++){
            sum = sum + arr[j][i];
        }
        cout << sum << endl;
    }
}

void diagnalSum(int arr[][4], int row, int col){   

    int sum = 0;
    for(int i =0; i<row; i++){
        sum = sum + arr[i][i];
    }
    cout << sum ;
}

void printReverseDiagnal(int arr[][4], int row, int col){
    for ( int i = row -1; i>=0; i--){
        cout << arr[i][i] << " ";
    }
}

void printArray(int arr[][4], int row, int col){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
}

void transposeArray(int arr[][4],int row, int col){
    for(int i =0; i< row; i++){
        for(int j = i; j< col; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main(){
    int arr[][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12},{13,14,15,16}};

    int row = 4;
    int col = 4;

    // rowWiseSum(arr, row, col);
    // colWiseSum(arr, row, col);
    // diagnalSum(arr, row, col);
    // printReverseDiagnal(arr, row, col);
    cout << "Array before transpose" << endl;
    printArray(arr, row, col);

    cout << "Array after transpose" << endl;
    transposeArray(arr, row, col);
    printArray(arr, row, col);
}