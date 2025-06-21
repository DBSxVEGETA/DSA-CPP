#include<iostream>
using namespace std;

void fancyPatternWithPyramid(int n){
    for(int row=0; row<n; row++){
        // printing 1st star pattern
        for(int col=0; col< n+2-row; col++){
            cout<<"*";
        }
        // printing numeric pyramid with star gaps
        for(int col=0; col<2*row+1; col++){
            //odd
            if(col%2==1){
                cout<<"*";
            }
            else{
                cout<<row+1;
            }
        }
        //printing 2nd star pattern
        for(int col=0; col<n+2-row; col++){
            cout<<"*";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin>>n;
    fancyPatternWithPyramid(n);
}