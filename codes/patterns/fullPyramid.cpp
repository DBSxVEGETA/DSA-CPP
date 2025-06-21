#include<iostream>
using namespace std;

void fullPyramid(int n){
    for(int row = 0; row<n;row++){
        // printing space
        for(int col =0; col<n-row-1;col++){
            cout<<" ";
        }
        // printing star
        for(int col=0;col<row+1;col++){
            cout<< "* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    fullPyramid(n);
}