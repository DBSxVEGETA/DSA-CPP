#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bestTimeToBuyAndSellStocks(vector<int>& prices){
    // auto min_it = min_element(prices.begin(), prices.end());
    // //the keyword auto tells the compiler to automatically deduce the type of the variable based on the expression it’s initialized with.

    // int min_value = *min_it;
    // int min_index = min_it - prices.begin();

    // int n = prices.size();
    // int profit = 0;

    // if(min_index<n-1){
    //     // finding max value in prices from min_index to n
    //     auto max_it = max_element(prices.begin()+ min_index + 1, prices.end());

    //     int max_value = *max_it;

    //     profit = max_value - min_value;

    //     cout <<"Maximum Profit is: " <<profit <<endl;
    // }else{
    //     cout << 0 << endl;
    // }

// this code will run fine but there will some edge cases like when the minimum value is at the last element of the prices array but we still have some profit from the previous values.
// eg = [2,4,1]; here the profit will be 2. 

// This login actually just run once and check the profit but we need to check the min_price every day.

    int min_price = prices[0];
    int max_profit = 0;

    for(int i = 0; i < prices.size(); i++){
        if(prices[i] < min_price){
            min_price = prices[i];
        }else{
            int profit = prices[i] - min_price;
            if(profit>max_profit){
                max_profit = profit;
            }
        }
    }

    cout << "Max Profit: " << max_profit <<endl;

}

int main(){
    // vector<int> prices = {2,4,1};
    vector<int> prices = {7,1,5,3,6,4};


    bestTimeToBuyAndSellStocks(prices);
}