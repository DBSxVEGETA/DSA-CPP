#include<iostream>
using namespace std;

double kilometerToMiles(double n){

    double miles;

    miles = n * 0.621371;

    return miles;

}

int main(){
    double n;
    cin>>n;
   cout << kilometerToMiles(n) << endl;
}