# include <iostream>
# include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 1)
            return 0;
        int pnl = 0;
        for (size_t i = 1; i < n; i++){
            if (prices[i] > prices[i - 1]){
                pnl += prices[i] - prices[i - 1];
            }
        }

        return pnl;
    }
};

int main(){
    vector<int> prices = { 7, 1, 5, 3, 6, 4};
    
    Solution sol;

    int pnl = sol.maxProfit(prices);

    cout << "Max pnl is: " << pnl;

    return 0;
}