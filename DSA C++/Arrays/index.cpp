#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    cout << "Printing the array" << endl;
    for (int i = 0; i < size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Printing done" << endl;
}

int main(){

    // declare
    int number[15];

    // accessing and array
    cout << "Value at 14 index - " << number[14] << endl;

    // cout << "Value of 20 index - " << number[20] << endl; 
    // not possible because the array has only 15 elements.

    //initialising an array
    int second[3] = {5, 7, 11};

    // accessing an element
    cout <<"Value at 2 index - "<< second[2] << endl;

    int third[15] = {2, 7}; // here we are initializing the array with only 2 elements so all the other elements will get the value as 0
    
    //printing the whole array
    int n = 15;
    // for (int i = 0; i < n;i++){
    //     cout << third[i] << " ";
    // };
    // cout << endl; 

    // printing array using function
    printArray(third, 15);

    int fourth[10] = {0};
    n = 10;
    // for (int i = 0; i < n; i++){
    //     cout << fourth[i] << " ";
    // };
    // cout << endl;
    printArray(fourth, 10);


    int fifth[10] = {1};
    n = 10;
    //  for (int i = 0; i < n; i++){   //in this case all elements does not get the value of 1 as in case on 0. only the first element gets the value 1 and the rest elements gets value 0
    //     cout << fifth[i] << " ";
    // };
    // cout << endl;

    printArray(fifth, 10);

    //to get all elements the same value
    int sixth[10];
    fill_n(sixth, 10, 1); // this is a command used to give all elements the same value
    n = 10;
    // for (int i = 0; i < n; i++){
    //     cout << sixth[i] << " ";
    // };
    // cout << endl;
    printArray(sixth, 10);

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    // printArray(ch, 5); // this will show the error because the function has an array which is initialised by int and not by char.
    cout << "Printing the array" << endl;
    for (int i = 0; i < 5;i++){
        cout << ch[i] << " ";
    }
    cout << endl;
    cout << "Printing done" << endl;




    cout<<endl << "Everything is Fine" << endl << endl;
    
    return 0;
}