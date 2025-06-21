#include<iostream>
using namespace std;

void checkprime(int n){

    int count = 0;
    for(int i = 2; i <n ; i++){
        if((n%i) == 0){
            count++;
        }
    }

    if(count>=2){
        cout<<n<<" : is not a prime number"<<endl;
    }else{
        cout<< n <<" : is a prime number";
    }

}

int main(){
    int n;
    cin>>n;

    checkprime(n);
}