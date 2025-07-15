#include<iostream>
#include<string.h>
using namespace std;

string decodeMessage(string key, string message){
    // create mapping logic 
    char start = 'a';
    char mapping[300] = {0};
    
    // looping over key for evert character using for each loop
    for(auto ch:key){
        // condition lagagenge map krne k liye. Jab ch ki value space h tb map nhi krna aur jab mapping array k character ki value 0 nhi h tb bhi map nhi krna
        if(ch != ' ' && mapping[ch] == 0){
            mapping[ch] = start;
            start++;
        }
    }

    // creating a string ans to store the decoded message
    string ans;
    
    // use mapping logic
    for(auto ch:message){
        if(ch == ' '){
            ans.push_back(' ');
        }
        else{
            char decodedChar = mapping[ch];
            ans.push_back(decodedChar);
        }
    }

    return ans;
}

int main(){
    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";

    cout << decodeMessage(key, message) << endl;
}