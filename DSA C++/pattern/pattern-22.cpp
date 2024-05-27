
// * * * *
// * * *
// * * 
// *


#include <iostream>
using namespace std;
// int main (){
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i<=n)
//     {
//         int stars = n - i + 1;
//         while (stars)
//         {
//             cout << "*"
//                  << " ";
//             stars = stars - 1;
//         }
//         cout << endl;
//         i++;
//     }
    
// }

// another way

int main (){
    int n;
    cin >> n;
    int i = n;
    while (i>=1)
    {
        int j = 1;
        while (j<=i)
        {
            cout << "*" << " ";
            j++;
        }
        cout << endl;
        i--;
    }

}

