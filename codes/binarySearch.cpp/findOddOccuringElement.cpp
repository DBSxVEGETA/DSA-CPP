#include<iostream>
#include<vector>
using namespace std;

int findOddOccuringElement(vector<int> nums){
    int n = nums.size();
    int start = 0;
    int end = n - 1;
    int mid = start+(end-start)/2;

    while(start<=end){
        // single element case
        if(start == end){
            return start;
        }

        // mid is at odd index
        // if(mid%2 == 1){
        if(mid&1){ // using bitwise & to check if mid is odd
            if(mid -1 >=0 && nums[mid] == nums[mid - 1]){
                // right jao
                start = mid + 1;
            }else{
                //left jao
                end = mid - 1;
            }
        }

        // mid is at even index
        // if(mid%2 == 0){
        else{ 
            if(mid + 1 < n && nums[mid] == nums[mid + 1]){
                // right jap
                start = mid + 2;
            }else{
                // ya toh m right part m khada hu ya toh m answer par khada hu 
                // thats why end = mid h. Kuki end = mid - 1 se answer lost ho sakt h
                end = mid;
            }
        }
        mid = start + (end - start)/2;
    }

    return -1;
}

int main(){
    vector<int> nums = {1,1,5,5,3,3,2,2,1,8,8,4,4,2,2};
    // vector<int> nums = {2};
    // vector<int> nums = {1,1,5,5,3,3,2,2,1,1,8,8,4,4,2,2};


    int ansIndex = findOddOccuringElement(nums);
    cout <<"Final answer is: " <<  nums[ansIndex] << " at index:  " << ansIndex << endl;

}