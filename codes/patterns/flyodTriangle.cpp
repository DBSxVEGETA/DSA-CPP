#include<iostream>
using namespace std;

void floydTriangle(int n){
    int num =1;
    for(int row=0; row<n; row++){
        for(int col=0; col<row+1; col++){
            cout<<num << " ";
            num+=1;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    floydTriangle(n);
}