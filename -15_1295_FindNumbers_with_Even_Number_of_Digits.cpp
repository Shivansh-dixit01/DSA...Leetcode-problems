
// 1295. Find Numbers with Even Number of Digits
// Given an array nums of integers, return how many of them contain an even number of digits.

 

// Example 1:

// Input: nums = [12,345,2,6,7896]
// Output: 2
// Explanation: 
// 12 contains 2 digits (even number of digits). 
// 345 contains 3 digits (odd number of digits). 
// 2 contains 1 digit (odd number of digits). 
// 6 contains 1 digit (odd number of digits). 
// 7896 contains 4 digits (even number of digits). 
// Therefore only 12 and 7896 contain an even number of digits.
// Example 2:

// Input: nums = [555,901,482,1771]
// Output: 1 
// Explanation: 
// Only 1771 contains an even number of digits.
 

// Constraints:

// 1 <= nums.length <= 500
// 1 <= nums[i] <= 105

//iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii
#include<iostream>
#include<vector>
using namespace std;

//iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii

// LeetCode Solution

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int length = nums.size();
        int ans=0;
        for(int i=0;i<length;i++){
            int value = nums[i];
            int count=0;
            while(value!=0){
                value = value/10;
                count++;
            }
            if(count%2==0){
                ans=ans+1;
            }
        }
        return ans;
    }
};

// IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII
int main(){
    Solution s1;
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter the vector : ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<s1.findNumbers(nums);
    return 0;
}