#include <iostream>
#include <vector>
#include <map>

using namespace std;

class TwoSum
{
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> umap;
        for (int i=0; i < nums.size(); i++){
            int complement = target - nums[i];
            if (umap.find(complement) != umap.end()){
                map<int, int>::iterator it = umap.find(complement);
                return vector<int> {it->second, i};
            }
            umap.insert(pair<int, int>(nums[i], i));
        }
        return nums;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums = { 2, 7, 11, 15};
    TwoSum sol;
    vector<int> vec = sol.twoSum(nums, 9);
    for (auto x: vec)
        cout << x << ", ";
    return 0;
}

