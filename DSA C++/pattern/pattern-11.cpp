
// 1
// 2 1
// 3 2 1
// 4 3 2 1



#include<iostream>
using namespace std;
// int main (){
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         int a = i;
//         while(j<=i){
//             cout << a << " ";
//             a = a - 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }


// or you can do like this 

// int main (){
//     int n;
//     cin >> n;
//     int i = 1;
//     int num = 1;
//     while (i<=n){
//         int j = 1;
//         while(j<=i){
//             cout << num << " ";
//             num--;
//             j++;
//         }
//         cout << endl;
//         num = i + 1;
//         i++;
//     }
// }

// one more method to solve this pattern

int main (){
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            int a = i - j + 1;
            cout << a << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    } 
}