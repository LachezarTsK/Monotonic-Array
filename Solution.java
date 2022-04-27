
public class Solution {

    public boolean isMonotonic(int[] nums) {
        boolean nonIncreasing = true;
        boolean nonDecreasing = true;

        for (int i = 0; i < nums.length - 1; ++i) {
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
}
