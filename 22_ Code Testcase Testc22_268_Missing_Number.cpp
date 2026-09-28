#include <iostream>
#include <vector>
using namespace std;

// LeetCode 268 - Missing Number
//
// Given an array nums containing n distinct numbers in the range [0, n],
// return the only number that is missing from the array.
//
// Example:
// Input:  [3, 0, 1]
// Output: 2

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        // Sum of numbers from 0 to n
        int totalSum = n * (n + 1) / 2;

        // Calculate the sum of elements present in the array
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }

        // The difference is the missing number
        return totalSum - sum;
    }
};

int main() {

    // Test case
    vector<int> nums = {3, 0, 1};

    Solution obj;

    int answer = obj.missingNumber(nums);

    cout << "Missing Number: " << answer << endl;

    return 0;
}