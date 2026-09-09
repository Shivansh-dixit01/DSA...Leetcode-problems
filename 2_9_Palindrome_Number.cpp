// Given an integer x, return true if x is a palindrome, and false otherwise.

// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.
// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
// Example 3:

// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 
#include <iostream>
#include<climits>
using namespace std;

bool isPalindrome(int x) {
        int realvalue=x;
        if(x<0){
            return false;
        }
        int rev=0;
        int digit=0;
        while(x!=0){
            digit=x%10;
            if(rev>INT_MAX/10 || (rev==INT_MAX/10 && digit>7) || rev<INT_MIN/10 || (rev==INT_MIN/10 && digit<-8)){
                return false;
            }
            rev=rev*10+digit;
            x=x/10;
        }
        if(rev==realvalue){
            return true;
        }
        return false;
        
    }

int main() {
    int n;
    cout<<"Enter the value : ";
    cin>>n;
    cout <<"This is a palindrome : "<<boolalpha <<isPalindrome(n);
    return 0;
}