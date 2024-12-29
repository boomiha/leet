int maxArea(int* height, int heightSize) 
{
    int left = 0;
    int right = heightSize - 1;
    int max_area = 0;
    while (left < right) 
    {
        int width = right - left;
        int min_height = (height[left] < height[right]) ? height[left] : height[right];
        int area = width * min_height;
        if (area > max_area) 
        {
            max_area = area;
        }
        if (height[left] < height[right]) 
        {
            left++;
        } else {
            right--;
        }
    }

    return max_area;
}