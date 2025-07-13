#include<iostream>
#include<string.h>
using namespace std;

int expand(string s, int i, int j){
    int count = 0;
    while(i >= 0 && j < s.length() && s[i] == s[j]){
        count++;
        i--;
        j++;
    }
    return count;
}

int countPalindromicSubstr(string s){
    int totalCount = 0;
    for(int center = 0; center<s.length(); center++){
        // odd case substr ka count nikal lo
        int oddKaCount = expand(s,center,center);

        // even case substr ka count 
        int evenKaCount = expand(s,center,center+1);

        totalCount = totalCount + oddKaCount + evenKaCount;
    }

    return totalCount;
}

int main(){
    // string s = "abc";
    string s = "aba";
    // string s = "madam";
    cout << countPalindromicSubstr(s) << endl;
}