
// 1 2 3 4 
//   2 3 4
//     3 4
//       4

#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while (j<i)
        {
            cout << "  ";
            j++;
        }
        int k = i;
        while (k<=n)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
        i++;
    }
}