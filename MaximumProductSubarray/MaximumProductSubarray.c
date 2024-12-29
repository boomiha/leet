int maxProduct(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    int maxProduct = nums[0];
    int currentMax = nums[0];
    int currentMin = nums[0];

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] < 0) {
            int temp = currentMax;
            currentMax = currentMin;
            currentMin = temp;
        }
        currentMax = (nums[i] > nums[i] * currentMax) ? nums[i] : nums[i] * currentMax;
        currentMin = (nums[i] < nums[i] * currentMin) ? nums[i] : nums[i] * currentMin;
        if (currentMax > maxProduct) {
            maxProduct = currentMax;
        }
    }

    return maxProduct;
}