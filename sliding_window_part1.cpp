//Example 1: Fixed Window (Maximum Sum of $k$ Elements)Problem: 
//Find the maximum sum of any $k$ consecutive elements in an array.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxSubArraySum(vector<int>& nums, int k) {
    int n = nums.size();
    if (n < k) return -1;

    int window_sum = 0;
    // 1. Calculate sum of the first window
    for (int i = 0; i < k; i++) {
        window_sum += nums[i];
    }

    int max_sum = window_sum;

    // 2. Slide the window from index k to n-1
    for (int i = k; i < n; i++) {
        // Add new element, subtract the one that's left behind
        window_sum += nums[i] - nums[i - k];
        max_sum = max(max_sum, window_sum);
    }

    return max_sum;
}

int main() {
    vector<int> data = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int k = 4;
    cout << "Maximum sum: " << maxSubArraySum(data, k) << endl;
    return 0;
}