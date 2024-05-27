#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//brute force solution
// void pairSum(int arr[], int size, int s){
//     for(int i = 0; i<size ; i++){
//         for(int j = i+1; j<size; j++){
//             if(arr[i]+arr[j] == s){
//                 cout << arr[i] << " " << arr[j] << endl;
//             }
//         }
//     }
// }

// two pointer solution
void pairSum(int arr[], int n, int target){
    vector<vector<int>> ans;
    sort(arr, arr + n);
    bool found = false;
    int i = 0;
    int low = i;
    int high = n - 1;
    while(low<high){
        int sum = arr[low] + arr[high];
        if(sum == target){
            ans.push_back({arr[low], arr[high]});
            found = true;

            while(low<high && arr[low] == arr[low+1])
                low++;
            while(low<high && arr[high]==arr[high-1])
                high--;

            low++;
            high--;
        }
        else if (sum < target){
            low++;
        }
        else{
            high--;
        }
    }

    if(!found){
        cout << -1 << endl;
    }

    for(const auto&triplet:ans){
        for(int num : triplet){
            cout << num << " ";
        }
        cout << endl;
    }
}



int main(){
    int target;
    cin >> target;
    int arr[3] ={3,2,4};

    pairSum(arr,3,target);

    return 0;
}