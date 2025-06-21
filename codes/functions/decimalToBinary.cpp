#include<iostream>
#include<cmath>
using namespace std;

int binaryToDecimalMethod1(int n){
    int binary = 0;
    int i = 0;
    while(n>0){
        int bit = n%2;
        binary = bit* pow(10, i++) + binary;
        n = n/2;
    }

    return binary;
}

int binaryToDecimalUsingBitwiseOperator(int n){
    int binary = 0;
    int i =0;
    while(n>0){
        int bit = n&1;
        binary = bit* pow(10, i++) + binary;
        n = n>>1;
    }

    return binary;
}

int main(){
    int n;
    cin>>n;
    cout << binaryToDecimalMethod1(n) << endl;

    cout << binaryToDecimalUsingBitwiseOperator(n) << endl;
}