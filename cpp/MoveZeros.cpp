#include <iostream>
#include <vector>

using namespace std;

class MoveZeros
{
public:
    void moveZeros(vector<int>& nums){
        int n = nums.size();
        if (n == 0 || n == 1)
            return;
        
        int left=0, right=0;
        int tmp;
        
        while (right < n){
            if (nums[right] == 0)
                ++right;
            else{
                tmp = nums[left];
                nums[left] = nums[right];
                nums[right] = tmp;
                ++left;
                ++right;
            }
        }
    }
};


int main(int argc, char const *argv[])
{
    vector<int> nums = { 0, 1, 0, 3, 12};
    MoveZeros sol;
    sol.moveZeros(nums);
    for (auto x: nums)
        cout << x << ", ";
    return 0;
}
