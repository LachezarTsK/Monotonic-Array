
/**
 * @param {number[]} nums
 * @return {boolean}
 */
var isMonotonic = function (nums) {
    let nonIncreasing = true;
    let nonDecreasing = true;

    for (let i = 0; i < nums.length - 1; ++i) {
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
};
