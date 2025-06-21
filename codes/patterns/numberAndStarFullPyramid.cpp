#include<iostream>
using namespace std;

void numberAndStarHalfPyramidMethod1(int n){
    //upper half
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
    //lower half
    for(int row =0; row<n; row++){
        for(int col=0; col<n-row; col++){
            if(col==n-row-1){
                cout<<n-row;
            }else{
                cout<< n-row <<"*";
            }
        }
        cout<<endl;
    }

}


int main(){
    int n;
    cin>>n;
    numberAndStarHalfPyramidMethod1(n);
}