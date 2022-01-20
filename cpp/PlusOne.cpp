#include <iostream>
#include <vector>

using namespace std;

class PlusOne
{
public:
    vector<int> plusOne(vector<int>& digits){
        int n = digits.size() - 1;
        int rem = 1;
        while (rem != 0 && n >= 0)
        {
            rem = (digits[n] + 1) / 10;
            if (rem == 0){
                digits[n]++;
                return digits;
            }
            else{
                digits[n] = 0;
                n--;
            }
        }

        if (rem != 0)
            digits.insert(digits.begin(), 1);

        return digits;
    }    
};

int main(int argc, char const *argv[])
{
    // vector<int> digits = { 1, 2, 3};
    // vector<int> digits = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    vector<int> digits = { 9, 0, 9};
    
    PlusOne sl;

    digits = sl.plusOne(digits);

    for (auto x: digits)
        cout << x << ", ";

    return 0;
}
