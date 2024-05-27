#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// brute force solution having time complexity On3

// bool isDuplicate(const vector<int>& triplet, const vector<vector<int>>& ans) {
//     return find(ans.begin(), ans.end(), triplet) != ans.end();
// }

// void tripletSum(int arr[], int n, int target){

//    vector<vector<int>> ans;
//    sort(arr, arr+n);
//    bool found = false;

//    for (int i = 0; i < n; i++)
//    {
//        for (int j = i + 1; j < n; j++)
//        {
//            for (int k = j + 1; k < n; k++)
//            {
//                if (arr[i] + arr[j] + arr[k] == target)
//                {
//                    vector<int> temp;
//                    temp.push_back(arr[i]);
//                    temp.push_back(arr[j]);
//                    temp.push_back(arr[k]);
//                    sort(temp.begin(), temp.end());
//                    if (!isDuplicate(temp, ans))
//                    {
//                        ans.push_back(temp);
//                        found = true;
//                    }
//                }
//            }
//        }
//     }

//     if(!found){
//         cout << -1 << endl;
//         return;
//     }

//      for (const auto& triplet : ans) {
//         for (int num : triplet) {
//             cout << num << " ";
//         }
//         cout << endl;
//     }
// }


// two pointer's approach , time complexity On2

bool isDuplicate(const vector<int>& triplet, const vector<vector<int>>& ans) {
    return find(ans.begin(), ans.end(), triplet) != ans.end();
}

void tripletSum(int arr[], int n , int target){
    vector<vector<int>> ans;
    sort(arr, arr + n);
    bool found = false;

    for (int i = 0; i < n;i++){
        int low = i + 1;
        int high = n - 1;
        while(low<high){
            int sum = arr[i] + arr[low] + arr[high];
          
            if(sum == target){
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[low]);
                temp.push_back(arr[high]);
                sort(temp.begin(), temp.end());
                if(!isDuplicate(temp,ans)){
                    ans.push_back(temp);
                    found = true;
                }
                while (low < high && arr[low] == temp[1]) low++;
                while (low < high && arr[high] == temp[2]) high--;
            }
            else if(sum < target){
                low++;
            }
            else{
                high--;
            }

        }
    }

    if(!found){
        cout << -1 << endl;
        return;
    }

    for(const auto&triplet:ans){
        for(int num:triplet){
            cout << num << " ";
        }
        cout << endl;
    }
}

int main (){
    int target;
    cin >> target;

    int arr[5] = {10,5,5,5,2};

    tripletSum(arr,5,target);

    return 0;
}
