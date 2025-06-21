#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> transposeMatrix(vector<vector<int>> &mat){
    int rows = mat.size();
    int cols = mat[0].size();

    if(rows == cols){     
        for(int i = 0; i < rows; i++){
            for(int j = i; j < cols; j++){
                swap(mat[i][j], mat[j][i]);
            }
        }
    }else{
        // creating a new matrix result
        vector<vector<int>> result(cols, vector<int>(rows));

        // looping or matrix mat
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                result[j][i] = mat[i][j];
            }
        }

        return result;
    }

   return mat;
}

int main(){
    // vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> mat = {{1,2,3},{4,5,6}};

    vector<vector<int>> transpose =  transposeMatrix(mat);


    int rows = transpose.size();
    int col = transpose[0].size();

    for(int i = 0; i <rows; i++){
        for(int j = 0; j < col; j++){
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}