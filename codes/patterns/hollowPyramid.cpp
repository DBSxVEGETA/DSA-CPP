#include<iostream>
using namespace std;

void hollowPyramid(int n){
    for(int row = 0; row<n;row++){
        //printing space 
        for(int col = 0; col<n-row-1; col++){
            cout<< " ";
        }
        // printing stars
        for(int col=0;col<row+1;col++){
            //printing star for 1st and lastplace 
            if(col==0 || col==row+1-1){
                cout<<"* ";
            }
            //prinitng space for every col between 1st and last column
            else{
                cout<<"  ";
            }
        }
        cout<< endl;
    }
}

int main(){
    int n;
    cin>>n;
    hollowPyramid(n);
}