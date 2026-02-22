#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;

        // Step 1: Count frequency
        for (int num : nums) {
            freq[num]++;
        }

        // Min heap: {frequency, number}
        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > pq;

        // Step 2: Maintain heap of size k
        for (auto &p : freq) {
            pq.push({p.second, p.first});
            if (pq.size() > k) {
                pq.pop();
            }
        }

        // Step 3: Extract result
        vector<int> result;
        while (!pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};