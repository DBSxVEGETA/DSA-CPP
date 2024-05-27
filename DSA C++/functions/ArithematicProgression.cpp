// Given an AP = 3*X + 7

// i/p = 3
// o/p = 3*3 + 7 = 16



#include<iostream>
using namespace std;

int arithimaticProgression(int x){
    int AP = 3 * x + 7;

    return AP;
}



int main (){

    int x;
    cin >> x;
    int AP = 0;
    AP = arithimaticProgression(x);

    cout << AP << endl;

    
    return 0;
}