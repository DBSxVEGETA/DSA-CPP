#include <iostream>
using namespace std;
bool isEven(int num){
//this condition check's whether the number is even or odd by using bitwise & operator. if the condition is true then the number is odd. 
    if(num&1){
        return 0;
    }
    return 1;
}

int main(){
    int num;
    cin >> num;

    if(isEven(num)){
        cout << "Number is Even" << endl;
    }
    else{
        cout << "Number is Odd" << endl;
    }
    return 0;
} 