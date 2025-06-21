#include <iostream>
using namespace std;

void flippedSolidDiamond(int n){
    //upper half of pattern
    for(int row = 0; row<n; row++){
        
        // 1st inverted half pyramid
        for(int col=0; col<n-row; col++){
            cout<<"*";
        }
        //full pyramid
        for(int col=0; col<2*row+1; col++){
            cout<<" ";
        }
        // 2nd inverted pyramid
        for (int col = 0; col < n-row; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

        // lower half of the pattern
    for(int row = 0; row<n; row++){
        //1st half pyramid
        for(int col=0;col<row+1; col++){
            cout<<"*";
        }
        // inverted full pyramid
        for(int col=0;col<2*n-2*row-1;col++){
            cout<<" ";
        }
        for(int col=0; col<row+1;col++){
            cout<<"*";
        }
        cout<<endl;
    }
        
}

int main(){
    int n;
    cin>>n;
    flippedSolidDiamond(n);
}