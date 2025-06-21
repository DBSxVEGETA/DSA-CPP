#include <iostream>
using namespace std;


void hollowDiamond(int n){
    // Upper half of the hollow pyramid
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        for(int col=0;col<row+1;col++){
            if(col==0 || col==row+1-1){
                cout<< "* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    // lower half of the hollow pyramid
    for(int row =0;row<n;row++){
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        for(int col=0;col<n-row;col++){
            if(col==0||col==n-row-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int num = n/2;
    hollowDiamond(num);
}