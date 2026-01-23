secondlargest element 
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max=INT_MIN;
        int secondmax=INT_MIN;
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
