#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(char ch[], int size){
    int start = 0;
    int end = strlen(ch) - 1;
    while(start<=end){
        if(ch[start] == ch[end]){
            start++;
            end--;
        }else{
            return false;
        }
    }
    return true;
}

int main(){
    char ch[100];
    cin.getline(ch,100);

    cout << checkPalindrome(ch,100) << endl;
}