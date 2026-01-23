secondlargest element 
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



 // Max Consecutive Ones
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,maxcount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                maxcount=max(maxcount,count);
            }
            else{
                count=0;
            }
        }
        return maxcount;
        
    }
};






// sets
#include <iostream>
#include<set>
using namespace std;
int main() {
set<int> s;
s.insert(0);
s.emplace(2);
s.emplace(4);
s.emplace(6);
s.emplace(8);
s.emplace(10);
for(auto it : s){
    cout<<it*it<<" ";
}
if(s.find(7)!=s.end()){
    cout<<"found";
}
else{
    cout<<"not found";
}
    return 0;
}





/*Function to find frequency of x
 * x : element whose frequency is to be found
 * arr : input vector
 */
class Solution {
  public:
    int findFrequency(vector<int> arr, int x) {
        // Your code here
        unordered_map<int,int> freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        return freq[x];
    }
};



// twice counter GFG
class Solution {
  public:
    int countWords(string list[], int n) {
        unordered_map<string,int> sat;
        for(int i=0;i<n;i++){
            sat[list[i]]++;
        }
        int count=0;
        for(auto s: sat){
            if(s.second==2){
                count++;
            }
        }
        return count;
    }
};
