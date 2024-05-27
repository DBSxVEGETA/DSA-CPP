#include<iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    // printing counting 
    // for (int i = 1; i <= n;i++){
    //     cout << i << endl;
    // }
    // also can be written as
    int i = 1;
    for (;;){
        if(i <= n){
        cout << i<<endl;
        }
        else{
            break;
        }
        i++;
    }
// can also intialize more than 1 variable in loop
    for (int a = 0, b = 1,c = 2; a >= 0, b >= 1,c >= 2;a--,b--,c--){
        cout << a << " " << b << " " << c << endl;
    }
}