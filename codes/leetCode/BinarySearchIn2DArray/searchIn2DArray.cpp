#include<iostream>
#include<vector>
using namespace std;

bool searchIn2D(vector<vector<int>> matrix, int target){
    int row = matrix.size();
    int col = matrix[0].size();
    int n = row*col;

    int start = 0;
    int end = n -1;
    int mid = start  + (end - start)/2;

    while (start<=end){
        int rowIndex = mid/col;
        int colIndex = mid%col;
        int currentNumber = matrix[rowIndex][colIndex];

        if(currentNumber == target){
            return true;
        }else if(target > currentNumber){
            start = mid + 1;
        }else{
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }

    return false;
    
}

int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,33,60}};
    int target = 11;

    cout << searchIn2D(matrix, target) << endl;
}