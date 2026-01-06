//Example 2: Variable Window (Smallest Subarray with Sum >= S)
//This uses two pointers (left and right) to expand and contract the window dynamically.

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int left = 0, current_sum = 0;
    int min_length = INT_MAX;

    for (int right = 0; right < nums.size(); right++) {
        current_sum += nums[right]; // Expand window

        // While condition is met, try to shrink it to find a smaller window
        while (current_sum >= target) {
            min_length = min(min_length, right - left + 1);
            current_sum -= nums[left];
            left++; // Contract window
        }
    }

    return (min_length == INT_MAX) ? 0 : min_length;
}