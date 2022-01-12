# include <iostream>
# include <algorithm>
# include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        int n = nums.size();
        
        if (n == 0 || n == 1)
            return n;
        
        for (int i = 0; i < n - 1; i++){
            if (nums[i] != nums[i + 1]){
                nums[j] = nums[i];
                j++;
            }    
        }

        // insert the last element
        nums[j] = nums[n - 1];

        return j + 1;
    }

    int removeDuplicates2(vector<int>& nums){
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        
        int k = nums.size();

        return k;
    }
};

int main(){
    vector<int> nums{ 1, 1, 2, 3, 3, 3, 4, 5, 5};
    
    Solution sol;

    // int k = sol.removeDuplicates(nums);
    // cout << k << "\n";
    // for (int i = 0; i < k; i++){
    //     cout << nums[i] << ", ";
    // }

    int k = sol.removeDuplicates2(nums);
    cout << k << "\n";
    for (auto x: nums)
        cout << x << ", ";

    return 0;
}