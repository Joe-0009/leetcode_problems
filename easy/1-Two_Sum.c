/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i = 0;
    int j = 1;

    returnSize = malloc(sizeof(int) * 2  );
    if (returnSize == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < numsSize; i++)
    {
        for(j = i +1; j < numsSize; j++)
        {
            if (nums[j] == target - nums[i] )
            {
                returnSize[0] = i;
                returnSize[1] = j;
                return (returnSize);
            }
        }
    }
    return (NULL);
}
