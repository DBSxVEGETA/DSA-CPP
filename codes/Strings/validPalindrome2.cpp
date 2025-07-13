#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(string s, int i, int j){
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }else{
            i++;
            j--;
        }
    }

    return true;
}

bool validPalindrome(string s){
    int i = 0;
    int j = s.length() - 1;

    while(i <= j){
        if(s[i]==s[j]){
            i++;
            j--;
        }else{
            // s[i]!=s[j]
            //1 character removal
            //check karenge palindrome for the remaing string after removal

            //ith character ko remove krke check kro 
            bool ans1 = checkPalindrome(s, i+1,j);
            // jth character ko remove krke check kro palindrome
            bool ans2 = checkPalindrome(s,i, j-1);

            return ans1 || ans2;
        }
    }

    return true; // original string is palindrome with 0 character removal
}

int main(){
    // string s = "aba";
    // string s = "aba";
    // string s = "abc";
    // string s = "madmam";
    // string s = "gracabrg";
    string s = "pacbappajcap";



    cout << validPalindrome(s) <<endl ;
}