#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int>& nums) {
    int count = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] > nums[(i + 1) % nums.size()])
            count++;
    }
    return count <= 1;
}

int main() {
    
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cout << "Enter the " << i << "th index value : ";
        cin >> nums[i];
    }
    cout << boolalpha << check(nums);

    return 0;
}