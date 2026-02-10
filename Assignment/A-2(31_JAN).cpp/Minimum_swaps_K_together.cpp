// Final function implementation
#include <vector>
#include <algorithm>    
using namespace std;
class Solution {
  public:
    int minSwap(vector<int>& arr, int k) {
    int n = arr.size();

    int good = 0;
    for (int x : arr)
        if (x <= k)
            good++;

    int bad = 0;
    for (int i = 0; i < good; i++)
        if (arr[i] > k)
            bad++;

    int ans = bad;

    // sliding window
    for (int i = 0, j = good; j < n; i++, j++) {
        if (arr[i] > k) bad--;
        if (arr[j] > k) bad++;

        ans = min(ans, bad);
    }

    return ans;
}
};
