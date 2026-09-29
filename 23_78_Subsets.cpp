// Given an integer array nums of unique elements, return all possible subsets (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

 

// Example 1:

// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
// Example 2:

// Input: nums = [0]
// Output: [[],[0]]
 

// Constraints:

// 1 <= nums.length <= 10
// -10 <= nums[i] <= 10
// All the numbers of nums are unique.

#include <iostream>
#include <vector>
using namespace std;

//IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII
// LEETCODE SOLUTION : 

void helper(vector<int>& nums, vector<int> ans,
            vector<vector<int>>& finalans, int idx) {

    if (idx == nums.size()) {
        finalans.push_back(ans);
        return;
    }

    // Don't include nums[idx]
    helper(nums, ans, finalans, idx + 1);

    // Include nums[idx]
    ans.push_back(nums[idx]);
    helper(nums, ans, finalans, idx + 1);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> ans;
    vector<vector<int>> finalans;

    helper(nums, ans, finalans, 0);

    return finalans;
}

//IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII
int main() {
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result = subsets(nums);

    cout << "All subsets are:" << endl;

    for (const auto& subset : result) {
        cout << "[";
        
        for (int i = 0; i < subset.size(); i++) {
            cout << subset[i];

            if (i < subset.size() - 1) {
                cout << ",";
            }
        }

        cout << "]" << endl;
    }

    return 0;
}