#include<iostream>
using namespace std;

float areaOfCircle(int n){
    // area of circle is 3.14 * r^2;

    float area = 3.14 * n * n;
    
    return area;

}

int main(){
    float n;
    cin >>n;
    cout<< areaOfCircle(n);
}