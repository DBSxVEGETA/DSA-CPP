#include<iostream>
#include<math.h>
using namespace std;

bool checkPalindrome(int x){
    int ans = 0;
    int i = 0;
   while(x>=0){
            int a = x%10;
            ans = ans + a*pow(10,i);
            x = x/10;
            i++;
    }

    if(1){
        cout << "hi" << endl;
    }
    if(ans == x){
        cout << ans << endl;
        return true;
    }
    return false;
}

int main(){
    int x = 121;
    cout << checkPalindrome(x) << endl;
}