#include <vector>
using namespace std;
class Solution {
  public:
    long long sumOfMaxSubarrays(vector<int>& arr, int k) {
        int n = arr.size();
        long long sum = 0;

        for (int i = 0; i <= n - k; i++) {
            int maxVal = arr[i];
            for (int j = i; j < i + k; j++) {
                maxVal = max(maxVal, arr[j]);
            }
            sum += maxVal;
        }

        return sum;
    }
};