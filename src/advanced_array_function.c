#include "../include/advanced_array_function.h"

int max_subarray_sum(int* nums, int size)
{
    if (size == 0) return 0;

    int max_sum = nums[0];
    int current_sum = nums[0];

    for (int i = 1; i < size; i++) {
        if (current_sum < 0)
            current_sum = nums[i];
        else
            current_sum += nums[i];

        if (current_sum > max_sum)
            max_sum = current_sum;
    }

    return max_sum;
}
int length_of_lis(int* nums, int numsSize)
{
    if (numsSize == 0) return 0;
    
    int len_a = 1; 
    int max_len = 1;
    
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] > nums[i-1]) {
            len_a++;
            if (len_a > max_len) { 
                max_len = len_a;
            }
        } else {
            len_a = 1;
        }
    }
    
    return max_len;
}
