#include<iostream>
using namespace std;

void inveretedNumericHalfPyramid(int n){
    for(int row=0; row<n; row++){
        for(int col=row+1; col>=1; col--){
            cout<< col;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    inveretedNumericHalfPyramid(n);
}