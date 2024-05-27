#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int checkOccurrence(int arr[], int n){

    vector<bool> visited(n, false);
    vector<int> ans;

    sort(arr, arr + n);

    for (int i = 0; i < n; i++){

        if(visited[i] == true)
        continue;
        int count = 1;

        for (int j = i + 1; j < n;j++){
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
        ans.push_back(count);
    }

    int size = ans.size();
    sort(ans.begin(), ans.end());
    for (int i = 0; i<size-1; i++){
            if(ans[i]==ans[i+1]){
                return false;
            }
            return true;
        }

        return 0;
    }


int main(){
    int arr[9] = {1, 2, 2, 1, 1, 3 , -1,-1 , 8};

     cout<< checkOccurrence(arr, 9);

    return 0;
}
