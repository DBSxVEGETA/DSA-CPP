#include<iostream>
using namespace std;

int invertedHalfPyramid(int n){
    for(int row=0;row<n;row++){
        //printing space
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        //printing stars
        for(int col=0;col<n-row;col++){
            cout<<"* ";
        }
        cout<< endl;
    }
}

int main(){
    int n;
    cin>>n;
    invertedHalfPyramid(n);
}