# include <iostream>
# include <vector>

using namespace std;

class RotateArray
{
    public:
    void rotate(vector<int>& nums, int k){
        int n = nums.size();
        vector<int> tmp(n, INT_MAX);
        for (size_t i = 0; i < n; i++){
            int idx = (i + k) % n;
            tmp[idx] = nums[idx];
            if (tmp[i] == INT_MAX)
                nums[idx] = nums[i];
            else
                nums[idx] = tmp[i];
        }
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums = { 1, 2, 3, 4, 5};
    RotateArray ra;
    ra.rotate(nums, 3);
    for (auto x: nums)
        cout << x << ", ";
    return 0;
}

