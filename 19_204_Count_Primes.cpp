#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) {
            return 0;
        }

        vector<bool> prime(n / 2, true);

        int limit = sqrt(n);

        for (int i = 3; i <= limit; i += 2) {
            if (prime[i / 2]) {
                for (int j = i * i; j < n; j += 2 * i) {
                    prime[j / 2] = false;
                }
            }
        }

        int ans = 1;  // counting 2

        for (int i = 3; i < n; i += 2) {
            if (prime[i / 2]) {
                ans++;
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.countPrimes(n) << endl;

    return 0;
}