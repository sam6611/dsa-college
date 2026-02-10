#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ss=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[ss]){
                nums[i]=nums[++ss];
            }
        }
        return ss+1;

    }

};