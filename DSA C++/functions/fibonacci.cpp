#include<iostream>
using namespace std;

void fibonacci(int n){
    int sum = 0;
    int a = 0;
    int b = 1;
        cout << a << " " << b << " ";
    for (int i = 1; i <= n; i++){
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
        i++;
    }
}

int main (){

    int n;
    cin >> n;

    fibonacci(n);

    return 0;
}



