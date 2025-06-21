#include<iostream>
using namespace std;

void findMax(int a, int b, int c){
    if(a>b && a>c){
        cout << "a is max" << endl;
    }
    else if (b>c && b > a){
        cout << "b is max" << endl;
        
    }else{
        cout << "c is max" << endl;
    }
}

int main(){
    findMax(70,10,8);
}