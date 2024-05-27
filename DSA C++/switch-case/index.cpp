#include<iostream>
using namespace std;

int main(){
    char ch = 'B';
    int num = 1;

    switch (ch)
    {
    case 'B':
        cout << "First" << endl;
        break;
    case 'A':
        switch(num){
            case 1:
                cout << "inside case A switch" << endl;
                break;
        }
        break;
        
        default:
            cout << "inside default" << endl;
    }
    cout << endl;
}