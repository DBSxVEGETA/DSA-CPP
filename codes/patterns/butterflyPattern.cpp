#include<iostream>
using namespace std;

void butterflyPattern(int n){
    // upper half
    for(int row = 0; row<n; row++){
        // printing 1st star pattern
        for(int col = 0; col < row+1; col++){
            cout<<"*";
        } 
        // printing space
        for(int col=0; col< n-2*row+2; col++){
            cout << " ";
        }
        // printing 2nd star
        for(int col=0; col<row+1; col++){
            cout << "*";
        }
        cout<<endl;
    }

    // lower half
    for(int row=0; row<n; row++){
        // printing 1st star
        for(int col=0; col<n-row; col++){
            cout<<"*";
        }
        // printing star
        for(int col=0; col<n+2*row-4; col++){
            cout<<" ";
        }
        //printing 2nd star
        for(int col=0; col<n-row; col++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    butterflyPattern(n);
}