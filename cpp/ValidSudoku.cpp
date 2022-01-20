#include <vector>
#include <unordered_set>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> store;
        string query;
        for (int i=0; i < 9; i++){
            for (int j=0; j < 9; j++){
                if (board[i][j] == '.')
                    continue;
                query = to_string(board[i][j]) + " row " + to_string(i);
                if (store.find(query) == store.end())
                    store.insert(query);
                else
                    return false;
                
                query = to_string(board[i][j]) + " col " + to_string(j);
                if (store.find(query) == store.end())
                    store.insert(query);
                else
                    return false;
                
                query = to_string(board[i][j]) + " sub-box " + to_string(i/3) + "-" + to_string(j/3);
                if (store.find(query) == store.end())
                    store.insert(query);
                else
                    return false;
            }
        }
        return true;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
