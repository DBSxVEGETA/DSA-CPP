#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// solution using sort
// void missingNumber(vector<int>& nums){
//     sort(nums.begin(),nums.end());
//     int a = 0;
//     for(int i = 0 ; i<nums.size(); i++){
//         if(nums[i] != a){
//             cout << a << endl;
//         }
//         a++;
//     }

//     cout << a << endl;
// }

// better solution by using sum
void missingNumber(vector<int>& nums){
    int sum = 0;
    int n = nums.size();
    for(int i = 0; i<n; i++){
        sum = sum + nums[i];
    }

    int totalSum = ((n)*(n+1))/2;
    int missingElement = totalSum - sum;

    cout << missingElement << endl;
}

int main(){
    vector<int> nums = {9,6,4,2,3,5,7,0,1,8};
    missingNumber(nums);
}