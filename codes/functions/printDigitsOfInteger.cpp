#include<iostream>
using namespace std;

int reversedNumber(int num){
    int reverse = 0;
    while(num>0){
        int digit = num%10;
        reverse = reverse*10 + digit;
        num=num/10;
    }

    return reverse;
}

void digitsOfInteger(int n){

    int reverseNum = reversedNumber(n);

    while(reverseNum>0){
            int digit = reverseNum %10;
            reverseNum = reverseNum/10;
            cout <<  digit << " ";
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin>>n; 
    digitsOfInteger(n);
}