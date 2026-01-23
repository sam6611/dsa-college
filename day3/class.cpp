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
