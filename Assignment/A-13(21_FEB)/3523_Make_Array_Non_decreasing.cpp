#include <vector>
#include <stack>                
using namespace std;
class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        stack<int> st;

        for (int num : nums) {

            int currMax = num;

            // Merge while previous block is larger
            while (!st.empty() && st.top() > currMax) {
                currMax = max(currMax, st.top());
                st.pop();
            }

            st.push(currMax);
        }

        return st.size();
    }
};