# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 1; i < n; i++){
            if (nums[i] == nums[i - 1])
                return true;
        }

        return false;
    }
};

int main(){
    vector<int> nums = { 1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    
    Solution sol;

    bool res = sol.containsDuplicate(nums);

    cout << "Has duplicates: " << res;

    return 0;
}