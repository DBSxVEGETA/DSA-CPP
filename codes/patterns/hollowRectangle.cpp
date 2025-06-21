#include<iostream>
using namespace std;

void hollowRectangle(int ROW, int COL){
 // method 1
 for(int i = 0; i< ROW;i++){
    for(int j=0;j<COL;j++){
        if((i>0 && i<ROW-1) && (j>0 && j<COL-1)){
            cout<<"  ";
        }
        else{
            cout<< "* ";
        }
    }
    cout << endl;
}

// method 2
for(int row =0; row<ROW;row++){
    for(int col=0;col<COL;col++){
        if(row==0||row==ROW-1){
            cout<<"* ";
        }
        else{
            if(col==0 || col==COL-1){
                cout<<"* ";
            }
            else{
                cout<< "  ";
            }
        }
    }
    cout<< endl;
}
}

int main(){
   int ROW;
   int COL;
   cin>>ROW>>COL;

   hollowRectangle(ROW,COL);
}