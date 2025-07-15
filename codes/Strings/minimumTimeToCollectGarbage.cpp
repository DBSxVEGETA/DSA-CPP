#include<iostream>
#include<string.h>
using namespace std;

int garbageCollection(string garbage[], int n, int travel[], int t){
    int pickP = 0, pickG = 0, pickM = 0;
    int travelP = 0, travelG = 0, travelM = 0;
    int lastP = 0, lastG = 0, lastM = 0;

    // loop over garbage array to take out the strings
    for(int i = 0; i<n; i++){
        // storing current string
        string curr = garbage[i];

        //loop over current string to take out the character
        for(int j = 0; j < curr.length(); j++){
            // storing current character
            char ch = curr[j];

            // checking what type of character is it to pick and take last index of garbage 
            if(ch == 'P'){
                pickP++;
                lastP = i;
            }else if(ch == 'G'){
                pickG++;
                lastG = i;
            }else if(ch == 'M'){
                pickM++;
                lastM = i;
            }
        }
    }

    // calculating travel time for picking garbage P 
    for(int i = 0; i<lastP; i++){
        travelP = travelP + travel[i];
    }
    // calculating travel time for picking garbage G
    for(int i = 0; i<lastG; i++){
        travelG += travel[i];
    }
    //calculating travel time for picking up garbage M
    for(int i = 0; i < lastM; i++){
        travelM += travel[i];
    }

    // calculating total time to pick and travel
    int ans = (pickP + travelP) + (pickM+travelM) + (pickG + travelG);

    return ans;
}

int main(){
    // string garbage[4] = {"G","P","GP","GG"};
    string garbage[4] = {"MMM","PGM","GP"};
    int travel[3] = {3,10};

    cout << garbageCollection(garbage,3,travel,3) << endl;
}
