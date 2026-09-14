// Que : You are given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.

 

// Example 1:

// Input: nums = [2,0,2,1,1,0]

// Output: [0,0,1,1,2,2]

// Explanation:

// The array has two 0s, two 1s, and two 2s. Sorting them in-place places all 0s first, then all 1s, then all 2s.

// Example 2:

// Input: nums = [2,0,1]

// Output: [0,1,2]

// Explanation:

// The array has one each of 0, 1, and 2, arranged in-place in the order 0, 1, 2.

 

// Constraints:

// n == nums.length
// 1 <= n <= 300
// nums[i] is either 0, 1, or 2.

//iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii

#include<iostream>
#include<vector>
using namespace std;

//iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii
// Leetcode solution

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int length=nums.size();
        for(int i=0;i<length;i++){
            for(int j=i+1;j<length;j++){
                if(nums[i]>nums[j]){
                    int temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
        }
    }
};

//iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii
int main(){
    Solution s1;
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter the value : ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    s1.sortColors(nums);
    for(int i=0;i<n;i++){
        cout<<"[ "<<nums[i]<<" ]";
    }
    return 0;
}