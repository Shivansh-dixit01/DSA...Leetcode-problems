// Question : Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

 

// Example 1:

// Input: x = 2.00000, n = 10
// Output: 1024.00000
// Example 2:

// Input: x = 2.10000, n = 3
// Output: 9.26100
// Example 3:

// Input: x = 2.00000, n = -2
// Output: 0.25000
// Explanation: 2-2 = 1/22 = 1/4 = 0.25
 

// Constraints:

// -100.0 < x < 100.0
// -231 <= n <= 231-1
// n is an integer.
// Either x is not zero or n > 0.
// -104 <= xn <= 104

//iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii
#include<iostream>
using namespace std;
//iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii

// LeetCode Solution :

class Solution {
public:
    double myPow(double x, long long n){
        double ans , value ;              
        if (n==0) return 1; 
        if(x==0) return 0; 
        if (n<0) return 1/myPow(x ,  -n);    
        value = myPow(x , n/2);
        if (n%2==0){
            ans = value*value;
        }else{  
            ans = value*value*x;
        }
        return ans;
    }
};

//iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii

int main(){
    Solution s1;
    double x;
    long long n;
    cout<<"Enter the value of base x : ";
    cin>>x;
    cout<<"Enter the value of exponent n : ";
    cin>>n;
    cout<<s1.myPow(x,n);
    return 0;
}