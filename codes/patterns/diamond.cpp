#include<iostream>
using namespace std;

int diamond(int n){
    //upper half of diamond
    for(int row = 0; row<n;row++){
        // printing space
        for(int col =0; col<n-row-1;col++){
            cout<<" ";
        }
        // printing star
        for(int col=0;col<row+1;col++){
            cout<< "* ";
        }
        cout<<endl;
    }

    //bottom half of diamond
    for(int row=0;row<n;row++){
        //printing space
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        //printing stars
        for(int col=0;col<n-row;col++){
            cout<<"* ";
        }
        cout<< endl;
    }
}

int main(){
    int n;
    cin>>n;
    int num = 0;
    num = n/2;
    diamond(num);

}