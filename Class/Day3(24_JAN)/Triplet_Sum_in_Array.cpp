#include <algorithm>
#include <vector>
using namespace std;
bool find3Numbers(int arr[], int n, int target) {
  
    sort(arr, arr + n);

    for (int i = 0; i < n - 2; i++) {
        
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int currentSum = arr[i] + arr[left] + arr[right];

            if (currentSum == target) {
                return true; 
            } 
            else if (currentSum < target) {
                left++; 
            } 
            else {
                right--;
            }
        }
    }
    return false;
}