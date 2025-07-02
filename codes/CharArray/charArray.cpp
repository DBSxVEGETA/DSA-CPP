#include<iostream>
using namespace std;

int main(){
    char ch[5];
    cout << "Take input for character array: " << endl;
    // cin >> ch;
    // cin >> ch[0];
    // cin >> ch[1];
    // cin >> ch[2];
    // cin >> ch[3];
    
    // finding ascii value of Null Character
    // char temp = ch[4];
    // int value = (int)temp;
    // cout <<"Printing the character array: "<< ch << endl; 
    // cout <<"Printing the ascii value of Null Character at index 4: " << value << endl;

    // cin >> ch;
    // cout << ch;

    cin.getline(ch,100);
    cout << ch;

}