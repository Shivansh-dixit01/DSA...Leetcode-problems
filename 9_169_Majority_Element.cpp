//     Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2
 

// Constraints:

// n == nums.length
// 1 <= n <= 5 * 104
// -109 <= nums[i] <= 109
// The input is generated such that a majority element will exist in the array.
 

//iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii 

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

//iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii

//LeetCode solution : this is a Brute force Solution which can take several ms the optimal solution is given bellow

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int length=nums.size();
        for(int i=0;i<length;i++){
         int count=0;
            for(int j=i+1;j<length;j++){
                if(nums[i]==nums[j]){
                    count+=1;
                }
                if(count>(length/2)){
                    return nums[i];
                }
            }
        }
    }
};

//iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii

int main() {
 Solution s1;
 int n;
 cout<<"Enter the size of vector : ";
 cin>>n;
 vector<int>nums(n);
 cout<<"Enter the vector : ";
 for(int i=0;i<n;i++){
    cin>>nums[i];
 }
 cout<<s1.majorityElement(nums);
    return 0;
}