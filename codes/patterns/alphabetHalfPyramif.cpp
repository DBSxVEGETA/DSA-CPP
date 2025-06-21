#include<iostream>
using namespace std;

void alphabetHalfPyramid(int n){
for(int row=0; row<n; row++){
    char ch;
    for(int col=0; col<row+1; col++){
        int num = col+1;
        ch= num + 'A' - 1;
        cout<<ch;
    }

    for(char alphabet = ch; alphabet>'A'; )   
        {
            alphabet = alphabet - 1;
            cout<<alphabet;
        }
    cout<<endl;
}
}

int main(){
    int n;
    cin>>n;
    alphabetHalfPyramid(n);
}