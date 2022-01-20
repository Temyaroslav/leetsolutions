#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        if (n == 1)
            return;
        
        for (int x = 0; x < n/2; x++){
            for(int y = x; y < n - x - 1; y++){
                int tmp = matrix[y][n - x - 1];

                // move top left to top right
                matrix[y][n - x - 1] = matrix[x][y];

                // move bottom left to top left
                matrix[x][y] = matrix[n - y - 1][x];

                // move bottom right to bottom left
                matrix[n - y - 1][x] = matrix[n - x - 1][n - y - 1];
                
                // move temp top right to bottom right
                matrix[n - x - 1][n - y - 1] = tmp;
            }    
        }
    }

    void printMatrix(vector<vector<int>>& matrix){
        int n = matrix[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                printf("%2d ", matrix[i][j]);

            printf("\n");
        }
        
        printf("\n");
    }
};

int main(int argc, char const *argv[])
{
    vector<vector<int>> m = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 }
    };
    Solution s;
    s.printMatrix(m);
    s.rotate(m);
    s.printMatrix(m);

    return 0;
}
