#include<iostream>
using namespace std;

int numericHalfPyramid(int n){
    for(int row = 0; row<n;row++){
        for(int col=0; col<row+1;col++){
            cout<<col+1<< " ";
        }
        cout<< endl;
    }
}

int main(){
    int n;
    cin>>n;
    numericHalfPyramid(n);
}