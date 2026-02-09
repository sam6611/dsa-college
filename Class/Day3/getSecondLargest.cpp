#include <bits/stdc++.h>
using namespace std;
// secondlargest element 
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max=-1;
        int secondmax=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                secondmax=max;
                max=arr[i];
            }
            else if(arr[i]<max && secondmax<arr[i]){
                secondmax=arr[i];
            }
        }
        if(secondmax==INT_MIN){
            return -1;
        }
        return secondmax;
    }
};