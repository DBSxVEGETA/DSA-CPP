#include<iostream>
using namespace std;

double fahrenheitToCelsius(double f){

    double celsius;
    celsius = (f - 32) * (5.0/9);

    return celsius;
}

int main(){
    double f;
    cin>>f;
    cout << fahrenheitToCelsius(f) << endl;
}