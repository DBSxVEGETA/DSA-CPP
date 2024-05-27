

// * * * *
//   * * *
//     * *
//       *



#include <iostream>
using namespace std;
// int main (){
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i<=n)
//     {
//         // printing space first
//         int space = i - 1;
//         while (space)
//         {
//             cout << "  ";
//             space = space - 1;
//         }
        
//         //printing stars
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
    int i = 1;
    while(i<=n)
    {
        // printing space
        int j = 1;
        while(j<i)
        {
            cout << "  ";
            j++;
        }
        // printing stars
        int k = i;
        while (k<=n)
        {
            cout << "*"
                 << " ";
            k++;
        }
        cout << endl;
        i++;
    }
}
