#include<iostream>
#include<cmath>
using namespace std;

int binaryToDecimalMethod1(int n){
    int decimal = 0;
    int i = 0;
    while(n>0){
        int bit = n%10;
        decimal = bit*pow(2,i++)+decimal;
        n = n/10;
    }
    return decimal;
}

int binaryToDecimalMethod2(string binary){
    int decimal = 0;
    for(char c:binary){
        decimal = decimal * 2 + (c -'0');
    }
    return decimal;
}

int main (){
    int decimal1 = binaryToDecimalMethod1(10111);
    int decimal2 = binaryToDecimalMethod2("10111");
    cout << decimal1 << endl << decimal2 << endl;
}