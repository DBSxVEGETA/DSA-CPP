#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // for (int i = 1; i <=n;i++){
    //     cout << "Hi" << endl;
    //     cout << "Hey" << endl;
    //     continue;
    //     cout << "Please reply" <<endl;
    // }

    for (int i = 0; i < 5;i++){
    for (int j=i; j<=5; j++)
    {
        if(i+j == 8){
            break;
        }
        cout << i << " " << j << endl;
    }
    
    }
}
