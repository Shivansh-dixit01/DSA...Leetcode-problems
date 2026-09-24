// Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.

 

// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
// Example 2:

// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]
 

// Constraints:

// 1 <= s.length <= 105
// s[i] is a printable ascii character.

//IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
      int i=0;
      int j=s.size()-1;
        while(i<=j){
            int temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }
    }
};

int main(){
    int n=0;
    cout<<"Enter the value of n : ";
    cin>>n;
    vector<char>s(n);
    cout<<"Enter the string : ";
    for(int i=0; i<s.size(); i++){
        cin>>s[i];
    }
    Solution s1;
    s1.reverseString(s);
    for(int i=0; i<s.size(); i++){
        cout<<s[i]<<" ";
    }
    return 0;
}

