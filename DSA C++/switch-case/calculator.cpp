#include <iostream>
using namespace std;

int main(){
    int a, b;

    cout << "Enter the value of a" << endl;
    cin >> a;

    cout << "Enter the value of b" << endl;
    cin >> b;

    char op;
    cout << "Enter the operation you want to take place" << endl;
    cin >> op;

    switch(op){
        case '+':
            cout <<"a + b = "<<(a+b)<< endl;
            break;

        case '-':
        cout <<"a - b = "<<(a-b)<< endl;
            break;

        case '*':
        cout <<"a * b = "<<(a*b)<< endl;
            break;

        case '/':
        cout <<"a / b = "<<(a/b)<< endl;
            break;
        
        case '%':
        cout <<"a % b = "<<(a%b)<< endl;
            break;

        default:
            cout << "Please enter a valid Operation" << endl;
    }
    return 0;
}




#include<iostream>
using namespace std;

int main (){

    int amt;
    int a = 0, b = 0, c = 0, d = 0;
    cin >> amt;

    switch(1){
        case 1: {
            a = amt / 100;
            amt = amt % 100;
            cout <<"Total 100 rupee notes - " <<  a << endl;
        }

        case 2:{
            b = amt / 50;
            amt = amt % 50;
            cout <<"Total 50 rupee notes - " << b << endl;
        }

        case 3:{
            c = amt / 20;
            amt = amt % 20;
            cout <<"Total 20 rupee notes - " << c << endl;
        }

        case 4: {
            d = amt;
            amt = 0;
            cout <<"Total 1 rupee notes - " << d << endl;
            break;
        }

        default :
            cout << "Please enter a valid amount" << endl;
            break;
    }

    cout <<"Amount Left - "<< amt << endl;
    return 0;
}