#include<iostream>
using namespace std;

int getQuotient(int divisor, int dividend){
    int start = 0;
    int end = dividend;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start<=end){
        if(mid * divisor == dividend){
            return mid;
        }else if(mid * divisor < dividend){
            ans = mid;
            start = mid + 1;
        }else if(mid * divisor > dividend){
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }

    return ans;
}

int main(){
    int divisor = 7;
    int dividend = 0;

    int ans = getQuotient(abs(divisor), abs(dividend));

    // handling negative ans if either the dividend is negative or the divisor is negative
    if((divisor<0 && dividend>0)||(divisor>0 && dividend<0)){
        ans = 0 - ans;
    }
    cout << ans << endl;
}