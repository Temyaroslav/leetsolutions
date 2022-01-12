# include <iostream>
# include <vector>
# include <set>
# include <numeric>

using namespace std;

class SingleNumber
{

public:
    int singleNumber1(vector<int>& nums){
        // O(n) time, O(n) space
        set<int> s(nums.begin(), nums.end());
        return accumulate(s.begin(), s.end(), 0) * 2 - accumulate(nums.begin(), nums.end(), 0);
    }
    int singleNumber2(vector<int>& nums){
        // O(n) time, O(1) space
        int s = 0;
        for (auto x: nums)
            s ^= x;
        return s;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums = { 25, 1, 1, 3, 3, 5, 5};

    SingleNumber sn;

    cout << "Using set+math: " << sn.singleNumber1(nums) << "\n";
    cout << "Using bits: " << sn.singleNumber2(nums);

    return 0;
}

