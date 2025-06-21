#include<iostream>
using namespace std;

void sumOfAllNumbers(int n){
    int sum =0;
    for(int i=1; i<=n; i++){
        sum = sum + i;
    }

    cout<< sum << endl;
}

int main(){
    int n;
    cin >> n;
    sumOfAllNumbers(n);
}