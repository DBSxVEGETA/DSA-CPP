

//       *
//     * * 
//   * * *
// * * * *


#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int i = 1;
    while (i<=n)
    {
        // printing space first
        int space = n - i;
        while (space){
            cout << "  ";
            space = space - 1;
        }

        // printing the stars  
        int j = 1;
        while (j<=i){
            cout <<"*"<<" ";
            j++;
        }
        cout << endl;
        i++;
    }
}