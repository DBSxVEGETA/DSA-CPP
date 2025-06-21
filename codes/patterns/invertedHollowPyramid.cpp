#include<iostream>
using namespace std;

void invertedHollowPyramid(int n){
    for(int row=0; row<n;row++){
        //prtinting space
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        //pritning stars
        for(int col=0; col<n-row;col++){
            //printing stars at 1st and last col
            if(col==0||col==n-row-1){
                cout<< "* ";
            }
            // printing space for col other than 1st and last col
            else{
                cout<<"  ";
            }
        }
        cout<< endl;
    }
}

int main (){
    int n;
    cin>>n;
    invertedHollowPyramid(n);
}