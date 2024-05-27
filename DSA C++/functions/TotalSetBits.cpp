#include<iostream>
using namespace std;


int countSetbit(int n){
    int count = 0;
    while(n){
        count = count + (n & 1);
        n = n>>1;
    }
    return count;
}


int main(){

    int a, b;
    cin >> a >> b;

    int setBitsOfa = countSetbit(a);
    int setBitsOfb = countSetbit(b);

    int totalSetBits = setBitsOfa + setBitsOfb;

    cout << totalSetBits << endl;

    return 0;
}
