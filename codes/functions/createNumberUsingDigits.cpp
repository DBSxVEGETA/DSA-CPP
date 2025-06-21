#include<iostream>
using namespace std;

int numberUsingDigits(){
    int n, digit, number = 0;

    cout << "Enter total number of digits: ";
    cin >> n;

    cout<< "Enter " << n << " number of digits ";
    for(int i = 0; i<n; i++){
        cin >> digit;
        if(digit < 0 || digit >9){
            cout << "Invalid digit. Enter digit between 0 and 9\n";
            return 1;
        }
        number = number * 10 + digit;
    }

    cout << "The number formed is : " << number << endl;
    return 0;
}

int main(){
    numberUsingDigits();
}