#include<iostream>
using namespace std;

void reverseHalfPyramid(int n){
    // method1
    for(int row =0; row<n;row++){
        for(int col=0;col<n-row;col++){
            cout<< "* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    reverseHalfPyramid(n);
}