#include <iostream>
using namespace std;

void invertedHollowHalfPyramid(int n){
    for(int row=0; row<n; row++){
        for(int col=0; col<n-row; col++){
            if(row==0 || row==n-1){
                cout<<"*";
            }else{
                if(col==0 || col==n-row-1){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    invertedHollowHalfPyramid(n);
}