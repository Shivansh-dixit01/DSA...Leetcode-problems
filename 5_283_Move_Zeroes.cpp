// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

 

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:

// Input: nums = [0]
// Output: [0]
 

// Constraints:

// 1 <= nums.length <= 104
// -231 <= nums[i] <= 231 - 1
 


#include<iostream>
#include<vector>
using namespace std;

// iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii

// leetcode solution

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int length = nums.size(); 
       
       int insertelement = 0;
       for(int i=0;i<length;i++){
            if(nums[i]!=0){
                nums[insertelement]=nums[i];
                insertelement++;
            }
       }
        while(insertelement<length){
            nums[insertelement]=0;
            insertelement++;
            }
    }
};  
//iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii
int main(){
    Solution s1;
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    s1.moveZeroes(nums);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}