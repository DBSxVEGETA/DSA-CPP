#include <iostream>
using namespace std;

void numericPalindromeEquilateralPyramid(int n){
    for(int row=0; row<n; row++){
        // spaces
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        // stars
        for(int col=0; col< row+1; col++){
            cout<<col+1;
        }
        if(row>0){
            for(int col=row; col>=1; col--){
            cout << col;
            }
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin>>n;
    numericPalindromeEquilateralPyramid(n);
}