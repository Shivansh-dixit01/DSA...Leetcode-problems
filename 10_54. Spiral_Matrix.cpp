// Given an m x n matrix, return all elements of the matrix in spiral order.

// Example 1:
// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,3,6,9,8,7,4,5]

// Example 2:
// Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
// Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 

// Constraints:

// m == matrix.length
// n == matrix[i].length
// 1 <= m, n <= 10
// -100 <= matrix[i][j] <= 100

//iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii
 

#include<iostream>
#include<vector>
using namespace std;

//iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii

// LeetCode Solution :

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int minr=0;
        int minc=0;
        vector<int>spiral;
        int maxr=matrix.size()-1;
        int maxc=matrix[0].size()-1;

        while(minr<=maxr && minc<=maxc){
            for(int j=minc ; j<=maxc ; j++){
                spiral.push_back(matrix[minr][j]);
            }
            minr++;
            if(minr<=maxr && minc<=maxc){
            for(int i=minr ; i<=maxr ; i++){
                spiral.push_back(matrix[i][maxc]);
            }
            }
            maxc--;
            if(minr<=maxr && minc<=maxc){
            for(int j=maxc ; j>=minc ; j--){
                spiral.push_back(matrix[maxr][j]);
            }
            }
            maxr--;
            if(minr<=maxr && minc<=maxc){
            for(int i=maxr ; i>=minr ; i--){
                spiral.push_back(matrix[i][minc]);
            }
            }
            minc++;
        }
        return spiral;
    }
};

//iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii
int main() {

    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    Solution obj;

    vector<int> result = obj.spiralOrder(matrix);

    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}