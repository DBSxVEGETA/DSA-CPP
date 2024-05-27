#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for (int i = 0; i < size;i++){
        if(key==arr[i]){
            return 1;
        }
    }
    return 0;
}


int main(){
    int arr[10] = {2, 24, 32, 28, -31, -26, -50, 33, 12, -14};

    cout << "Enter the number to be searched for " << endl;

    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if(found){
        cout << "Key is Present" << endl;
    }
    else{
        cout << "Key is Absent" << endl;
    }


    return 0;
}