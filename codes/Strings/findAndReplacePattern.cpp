#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

void createMapping(string& str){
    char start = 'a';
    char mapping[300] = {0};

    // create mapping 
    for(auto ch:str){
        if(mapping[ch]==0){
            mapping[ch] = start;
            start++;
        }
    }

    // update string 
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        str[i] = mapping[ch];
    }
}

vector<string> findAndReplacePattern(vector<string>& words, string pattern){
    vector<string> ans;

    // normalizing the pattern
    createMapping(pattern);

    // looping over the words array to find strings
    for(string s:words){
        string tempString = s;
        // normalizing the current string
        
        createMapping(tempString);

        // comparing the strings
        if(tempString == pattern){
            ans.push_back(s);
        }
    }

    return ans;
}

int main(){
    vector<string> words = {"abc","deq","mee","aqq","dkd","ccc"};
    string pattern = "abb";

    vector<string> result = findAndReplacePattern(words, pattern);

    for(int i = 0; i<result.size(); i++){
        cout << result[i] << endl;
    }
}