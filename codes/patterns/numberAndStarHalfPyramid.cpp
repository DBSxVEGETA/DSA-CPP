#include<iostream>
using namespace std;

void numberAndStarHalfPyramidMethod1(int n){
    for(int row=0; row<n;row++){
        int totalcol = row+1;
        for(int col=0; col<totalcol; col++){
            if(col==totalcol-1){
                cout<<row+1;
            }else{
                cout<<row+1<<"*";
            }
        }
        cout << endl;
    }
}

void numberAndStarHalfPyramidMethod2(int n){
    for(int row = 0; row<n;row++){
        for(int col=0;col<2*row+1;col++){
            if(col%2==1){
                //odd
                cout<<"*";
            }
            else{
                //even
                cout<<row+1;
            }
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    numberAndStarHalfPyramidMethod1(n);
    numberAndStarHalfPyramidMethod2(n);
}