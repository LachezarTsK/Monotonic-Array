
#include <vector>
using namespace std;

class Solution {
    
public:
    bool isMonotonic(vector<int>& nums) {
        bool nonIncreasing = true;
        bool nonDecreasing = true;

        for (int i = 0; i < nums.size() - 1; ++i) {
            if (nums[i] < nums[i + 1]) {
                nonIncreasing = false;
            } else if (nums[i] > nums[i + 1]) {
                nonDecreasing = false;
            }
            if (!nonIncreasing && !nonDecreasing) {
                return false;
            }
        }
        return true;
    }
};
