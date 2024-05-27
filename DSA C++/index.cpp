#include <iostream>
using namespace std;

int main(){

    int i = 2, n;
    cin >> n;
    while(i<n){
            if(n%i == 0){
                cout << "n is not a prime number"<< endl;
            }
            else {
                cout << "n is prime";
                }
            i++;
            return 0;
        }
}