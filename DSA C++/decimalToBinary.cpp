
// convert a number into binary form.

#include<iostream>
#include<math.h>
using namespace std;
// int main (){
//     int n;
//     cin >> n;
//     int ans = 0;
//     // int i = 0;
//     // while (n!=0)
//     // {
//     //     int bit = n & 1;
//     //     ans = (bit * pow(10, i) + ans);
//     //     n = n >> 1;
//     //     i++;
//     // }
//     // cout << ans << endl;
//     for (int i = 0; n!=0; i++){
//         int bit = n & 1;
//         ans = (bit * pow(10, i) + ans);
//         n = n >> 1;
//     }
//     cout << ans << endl;
// }

// code to convert negative number to binary 

int main (){
    int n;
    cin >> n;

    // finding binary 1st
    n = n * (-1);
    int ans = 0;
    for (int i = 0; n != 0; i++)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i) + ans);
        n = n >> 1;
    }

    // now we have got binary so to print -ve number we have to find 2's complement 

    // 1's complement
    int newAns = (~ans);

    // 2's complement
    newAns = newAns + 1;

    cout << newAns;
}