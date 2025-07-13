#include<iostream>
#include<string.h>
using namespace std;

string findOccurenceAndRemove(string s, string part){
    while(s.find(part) != string::npos){
        // if inside loop that means part still exists inside s
        s.erase(s.find(part),part.length());
    }

    return s;
}

int main(){
    string s = "daabcbaabcbc";
    string part = "abc";

    cout << findOccurenceAndRemove(s,part) << endl;
}