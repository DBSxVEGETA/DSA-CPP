
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

#include<iostream>
using namespace std;
// int main (){
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i<=n)
//     {
//         int j = 1;
//         int start = n - i + 1;
//         while (start)
//         {
//             cout << j << " ";
//             j++;
//             start--;
//         }

//         int star = i - 1;
//         while (star){
//             cout << "*"
//                  << " ";
//             star--;
//         }
//         int star1 = i - 1;
//         while (star1)
//         {
//             cout << "*"
//                  << " ";
//             star1--;
//         }
//         int k = i;
//         int end = n - i + 1;
//         while (k<=n)
//         {
//             cout << end << " ";
//             end--;
//             k++;
//         }
//         cout << endl;
//         i++;
//     }  
// }


// better code for the pattern. putting stars all together at once. 

int main (){
    int n;
    cin >> n;
    int i = 1; 
    while(i<=n){
        // printing 1st triangle 
        int j = 1;
        int start = n - i + 1;
        while (start)
        {
            cout << j << " ";
            j++;
            start--;
        }
        // printing stars, 2nd triangle 
        int star = 2 * i - 2;
        while (star)
        {
            cout << "*"
                 << " ";
            star--;
        }
        // printing 3rd triangle  
        int k = i;
        int end = n - i + 1;
        while (k<=n)
        {
            cout << end << " ";
            k++;
            end--;
        }
        cout << endl;
        i++;
    }
}