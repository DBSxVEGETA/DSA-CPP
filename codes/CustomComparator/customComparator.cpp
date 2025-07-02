#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void printVector(vector<int>&v){
    for(int i =0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

bool myComparator(int &a, int &b){
    return a > b;
}

void print2DVector(vector<vector<int>>&v){
    for(int i = 0; i<v.size();i++){
        for(int j = 0; j < v[0].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout <<endl;

    // for(int i =0; i < v.size(); i++){
    //     vector<int>&temp = v[i];
    //     int a = temp[0];
    //     int b = temp[1];
    //     cout << a << " " << b << " ";
    // }
    // cout << endl;
}

bool myComparatorFirstIndex(vector<int>&a, vector<int>&b){
    // return a[1] > b[1]; sort in descending order comparing the 1st index
    return a[1]<b[1]; // sort in ascending order comparing the 1st index
}

int main(){
    // vector<int> v = {15,6,4,89,22,3,1,45};

    // sort(v.begin(),v.end()); sort vector in increasing order

    // To sort the vector in descending order we can use Comparators 
    // sort(v.begin(),v.end(), myComparator);

    // printVector(v);


    // To sort a 2D vector 
    vector<vector<int>> v = {{1,44},{0,55},{0,22},{0,11},{2,33}};
    // sort(v.begin(),v.end()); 

    // print2DVector(v);
    // this will sort the 2D vector in ascending order taking 0th index in comparison. 

    // to sort the vector in descending we will pass a comparator
    sort(v.begin(),v.end(),myComparatorFirstIndex);
    print2DVector(v);


}