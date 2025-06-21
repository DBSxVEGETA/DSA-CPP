#include<iostream>
#include<vector>
using namespace std;

void wavePrint(vector<vector<int>> matrix){

    int rows = matrix.size();
    int cols = matrix[0].size();

    for(int i = 0; i < cols ; i++){
        if(i%2 == 0){
        for(int j = 0; j < rows; j++){
                cout << matrix[j][i] << " ";
            }
        }else{
            for(int j = rows-1; j>=0; j--){
                cout << matrix[j][i] << " ";
            }
        }
    }

}

int main(){
    vector<vector<int>> matrix = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };

    wavePrint(matrix);
}