#include <bits/stdc++.h>
using namespace std;
// third largest

class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // Your code here
        int maxi=INT_MIN;
        int secmaxi=INT_MIN,thirdmaxi=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>maxi){
                thirdmaxi=secmaxi;
                secmaxi=maxi;
                maxi=arr[i];
                
            }
            else if( arr[i]>=secmaxi){
                thirdmaxi=secmaxi;
                secmaxi=arr[i];
                
            }
            else if(arr[i]>=thirdmaxi){
                thirdmaxi=arr[i];
            }
        }
        return thirdmaxi;   
    }
    
};