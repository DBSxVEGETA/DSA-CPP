#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


// In raw array form

void mergeUsingRawArray(int nums1[], int m, int nums2[], int n){
        for(int i =0; i<n ; i++){
                nums1[m+i] = nums2[i];
            }
        
            sort(nums1, nums1 + m + n);
}
        
// In vector form
void mergeUsingVector(vector<int>& nums3, int a, vector<int>& nums4, int b){

    // resizing nums1 
    nums3.resize(a+b);

    for(int i = 0; i < b; i++){
        nums3[a+i] = nums4[i];
    }

    sort(nums3.begin(), nums3.end());
}

int main(){
    int nums1[6] = {1,2,3};
    int nums2[3] = {2,5,6};

    int m = 3, n = 3;
    
    vector<int> nums3 = {1};
    vector<int> nums4 = {};
    
    int a = 1, b = 0;

    mergeUsingRawArray(nums1, m, nums2, n);
    mergeUsingVector(nums3, a, nums4, b);

    cout << "Merged Array: ";
    for(int i = 0; i < m+n; i++){
        cout << nums1[i] << " ";
    }

    cout << endl;

    cout << "Merged Array: ";
    for(int num: nums3){
        cout << num << " ";
    }

    cout << endl;

    return 0;
}




