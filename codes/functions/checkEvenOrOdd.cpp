#include<iostream>
using namespace std;

void checkEvenOrOdd(int n){
    if(n%2==0){
        cout<<n<<" : is Even"<<endl;

    }else{
        cout<<n << " : is Odd"<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    checkEvenOrOdd(n);
}