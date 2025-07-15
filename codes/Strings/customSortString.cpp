#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

string str;

bool compareSort(char char1, char char2){
    return (str.find(char1) < str.find(char2));
}

string customSortString(string order, string s){
    str = order;
    sort(s.begin(),s.end(), compareSort);
    return s;
}

int main(){
    string order = "bcafg";
    string s = "abcd";

    cout <<"Permuation of string s is: "<< customSortString(order,s) << endl;
}