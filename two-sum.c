#include "stdio.h"
#include "stdlib.h"

/*
    Input: nums = [2,7,11,15], target = 9
    Output: [0,1]
    Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
*/

int *twoSum(int *nums, int numsSize, int target, int *returnSize);

void main(void)
{

    int arr[] = {2, 2, 11, 7}, target = 9;
    int sizeOfArr = sizeof(arr) / sizeof(arr[0]);
    int returendSize;

    int *result = twoSum(arr, sizeOfArr, target, &returendSize);

    printf("result is : [%d, %d]\n", result[0], result[1]);
    free(result); 
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *re_arr = (int *)malloc(2 * sizeof(int));
    int i, j;
    for (i = 0; i < numsSize; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                re_arr[0] = i;
                re_arr[1] = j;
                *returnSize = 2;
                return re_arr;
            }
        }
    }
}