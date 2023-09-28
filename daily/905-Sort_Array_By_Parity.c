/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize){
    int j = 0;
    int *numbers = malloc(sizeof(int) * (numsSize));
    *returnSize = numsSize;
    if (numbers == NULL)
    {
        return (NULL);
    }

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] % 2 == 0)
        {
            numbers[j] = nums[i];
            j++;
        }
    }
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] % 2 != 0)
        {
            numbers[j] = nums[i];
            j++;
        }
    }
    return (numbers);
}
