#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinaryMethod1(int n){
    int binary = 0;
    int i = 0;
    while(n>0){
        int bit = n%2;
        binary = bit* pow(10, i++) + binary;
        n = n/2;
    }
    return binary;
}

int decimalToBinaryMethod2(int n){
    int binary = 0;
    int i = 0;
    while(n>0){
        int bit = n&1;
        binary = bit*pow(10,i++)+binary;
        n=n>>1;
    }
    return binary;
}

int main(){
    int n;
    cin>>n;
    int binary1 = decimalToBinaryMethod1(n);
    int binary2 = decimalToBinaryMethod2(n);
    cout << binary1<< endl << binary2<<endl;
}