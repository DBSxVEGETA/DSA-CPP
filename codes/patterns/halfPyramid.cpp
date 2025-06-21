#include<iostream>
using namespace std;

void halfPyramid(int ROW, int COL){
    // method1
    for(int row=0;row<ROW;row++){
        for(int col=0;col<COL;col++){
            if(col<=row){
                cout<<"* ";
            }else{
                cout<< "  ";
            }
        }
        cout<< endl;
    }

    // method
    for(int row =0;row<ROW;row++){
        for(int col=0;col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int ROW, COL;
    cin>>ROW>>COL;
    halfPyramid(ROW,COL);
}