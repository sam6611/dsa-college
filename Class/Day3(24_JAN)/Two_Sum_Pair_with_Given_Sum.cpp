#include <vector>
#include <unordered_set>    
using namespace std;
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
    unordered_set<int> seen;
    for (int x : arr) {
        int complement = target - x;
        if (seen.find(complement) != seen.end()) {
            return true;
        }
        seen.insert(x);
    }
    return false;
}
};
