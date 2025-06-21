#include<iostream>
using namespace std;

void sumOfAllEvenNumber(int n){
    int sum = 0;
    for(int i = 2; i <= n; i = i+ 2){
        sum = sum + i;
    }

    cout << sum << endl;
}

int main(){
    int n;
    cin >> n;
    sumOfAllEvenNumber(n);
}