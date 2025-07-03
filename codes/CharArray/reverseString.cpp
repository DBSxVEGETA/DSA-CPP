#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

void reverseString(char ch[], int size){
    int a = 0;
    int b = size - 1;

    while(a<=b){
        swap(ch[a], ch[b]);
        a++;
        b--;
    }
}

int main(){
    char ch[100];

    cin.getline(ch,100);
    cout << "Before: " << ch << endl;
    // reverseString(ch, 100); this has an issue becuase here we are passing the whole size of the array not the length of the string so we have to pass the length of the string
    int length = strlen(ch);
    reverseString(ch, length);
    cout << "After: " << ch << endl;
}