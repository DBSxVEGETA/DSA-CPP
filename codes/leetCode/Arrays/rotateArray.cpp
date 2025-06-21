#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotateArray(vector<int>& nums, int k){
    
// better solution by using reverse method

int n = nums.size();
k = k%n;

// reverse the whole array first
reverse(nums.begin(), nums.end());

// reverse only the first k elements
reverse(nums.begin(), nums.begin()+k);

// reverse the elements after k
reverse(nums.begin()+k, nums.end());
}

// better solution using modulus 
// void rotateArray(vector<int>& nums, int k){
//     int n = nums.size();
//     vector<int> arr(n);
//     for(int i = 0; i<n; i++){
//         int newIndex = (i+k)%n;
//         arr[newIndex] = nums[i];
//     }
//     nums = arr;
// }


// solution using and another array to store last k elements but this solution with have space complexity of O(n)
// void rotateArray(vector<int>& nums, int k){
//     int arr [k];
//     int j = 0;
    
//     // storing last k elements in arr
//     for(int i = nums.size() - k; i < nums.size(); i++){
//         arr[j] = nums[i];
//         j++;
//     }   

//     // shift 1st k elements to last
//     for(int i = nums.size()-1; i>= k ; i--){
//         nums[i] = nums[i-k];
//     }

//     // putting elements stored in arr to nums
//     for(int i = 0; i<k; i++){
//         nums[i] = arr[i];
//     }

// }
    
// void rotateArray(vector<int>& nums, int k){
// // Brute Force Solution. This will work fine but take a lot of time if the size of the array is too big or the value of k is big
//     int n = nums.size();
//     k = k % n;  // handles cases when k>n;

//     for( int i = 0; i < k; i++){
//         int last = nums[n-1];

//         for(int j = n-1; j > 0 ; j--){ // looping from right to left
//             nums[j]=nums[j-1];
//         }
//         nums[0] = last;
//     }
// }

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    rotateArray(nums, k);

    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}