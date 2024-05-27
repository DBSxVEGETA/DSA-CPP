#include<iostream>
using namespace std;

int getMin(int num[],int n){
    int minimum = INT_MAX;
    for (int i = 0; i < n; i++){
        minimum = min(minimum, num[i]); // this is a method defined in c++, min()
        // if(num[i]<min){
        //     minimum = num[i];
        // }
    }
    return minimum;
}

int getMax(int num[],int n){
    int maximum = INT_MIN;
    for (int i = 0; i < n; i++){
        maximum = max(maximum, num[i]); // this is a method defined in c++, max( )
        // if(num[i]>max){
        //     maximum = num[i];
        // }
    }
    return maximum;
}

int main(){
    int size;
    cin >> size;

    // int num[size];   bad practice 
    int num[100];

    // taking input in array
    for (int i = 0; i < size;i++){
        cin >> num[i];
    }

    cout << "Maximum Value in array is " << getMax(num, size) << endl;
    cout << "Minimum Value in array is " << getMin(num, size) << endl;

    return 0;
}