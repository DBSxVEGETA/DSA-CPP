#include<iostream>
using namespace std;

int findSquareRoot(int x){
    // defining search range
    int start = 0;
    int end = x;

    // finding mid
    // create a long long int value becuase mid * mid will lead to integer value overflow
    long long int mid = start + (end - start)/2;

    int ans = -1;

    while(start<=end){
        if(mid*mid == x){
            return mid;
        }else if(mid*mid < x){
            ans = mid;
            start = mid + 1;
        }else if(mid*mid > x){
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }

    return ans;
}

int main(){
    int x = 68;

   cout << findSquareRoot(x) << endl;
}