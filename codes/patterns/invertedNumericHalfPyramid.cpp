#include<iostream>
using namespace std;

void invertedNumericHalfPyramid(int n){
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row;col++){
            cout<< col+1 <<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    invertedNumericHalfPyramid(n);
}
