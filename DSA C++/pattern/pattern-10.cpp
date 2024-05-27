
// 1
// 2 3
// 3 4 5
// 4 5 6 7

#include<iostream>
using namespace std;
// int main (){
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i<=n){
//         int a = i;
//         int j = 1;
//         while(j<=i){
//             cout << a << " ";
//             a++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// another way of solving the same problem 


// int main (){
//     int n;
//     cin >> n;
//     int i = 1;
//     int num = 1;
//     while (i<=n){
//         int j = 1;
//         while (j<=i){
//             cout << num << " ";
//             num = num + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         num = i + 1;
//         i = i + 1;
//     }
// }

// another way using formula

int main(){
    int n;
    cin >> n;
    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout << i + j - 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
} 