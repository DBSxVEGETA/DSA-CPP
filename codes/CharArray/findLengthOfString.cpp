#include<iostream>
#include<string.h>
using namespace std;

int findLength(char ch[], int size){
    int length = 0;
    int index = 0;

    while(ch[index] != '\0'){
        length++;
        index++;
    }
    // for(int i = 0; i < size; i++){
    //     if(ch[i] == '\0'){
    //         break;
    //     }else{
    //         length++;
    //     }
    // }
    return length;
}

int main(){
    char ch[100];
    // cin >> ch;
    cin.getline(ch, 100);

    int length = findLength(ch, 100);

    cout << "Length of the String: " << length << endl;
    
    // inbuilt function to find length
    cout << "Legth of String using inbuilt function: " << strlen(ch);
}