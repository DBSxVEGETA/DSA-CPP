#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> rotateImage(vector<vector<int>>& matrix){
    int n = matrix.size();
    // step 1 transpose the matrix
        for(int i = 0; i<n; i++){
            for(int j = i; j<matrix[i].size(); j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    // step 2 reverse the row
        for( int i = 0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
}


int main(){

    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    rotateImage(matrix);

    for(int i = 0; i<matrix.size(); i++){
        for(int j = 0; j<matrix[i].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}