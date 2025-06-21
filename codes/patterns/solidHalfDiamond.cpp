#include<iostream>
using namespace std;

void solidHalfPattern(int n){
    // 1st half pyramid
    for(int row=0; row<n; row++){
        for(int col=0; col<row+1; col++){
            cout<<"*";
        }
        cout<<endl;
    }

    //2nd half pyramid
    for(int row=0; row<n-1; row++){
        for(int col=0; col<n-1-row; col++){
            cout<<"*";
        }
        cout<<endl;
    }

}

int main(){
    int n;
    cin>>n;
    solidHalfPattern(n);
}