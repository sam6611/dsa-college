#include <vector>
using namespace std;
class Solution {
  public:
    
    long long merge(vector<int>& arr, int left, int mid, int right) {
        int i = left;
        int j = mid + 1;
        vector<int> temp;
        long long invCount = 0;

        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i++]);
            } else {
                temp.push_back(arr[j++]);
                invCount += (mid - i + 1);
            }
        }

        while (i <= mid) temp.push_back(arr[i++]);
        while (j <= right) temp.push_back(arr[j++]);

        for (int k = 0; k < temp.size(); k++) {
            arr[left + k] = temp[k];
        }

        return invCount;
    }

    long long mergeSort(vector<int>& arr, int left, int right) {
        long long invCount = 0;

        if (left < right) {
            int mid = left + (right - left) / 2;

            invCount += mergeSort(arr, left, mid);
            invCount += mergeSort(arr, mid + 1, right);
            invCount += merge(arr, left, mid, right);
        }

        return invCount;
    }

    int inversionCount(vector<int> &arr) {
        return mergeSort(arr, 0, arr.size() - 1);
    }
};