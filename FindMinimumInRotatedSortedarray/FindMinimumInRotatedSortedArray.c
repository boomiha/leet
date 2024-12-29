int findMin(int* nums, int numsSize) 
{
      for (int i = 1; i < numsSize; i++) {
        if (nums[i] < nums[i - 1]) {
            return nums[i];  
        }
    }
    return nums[0];
   
}
