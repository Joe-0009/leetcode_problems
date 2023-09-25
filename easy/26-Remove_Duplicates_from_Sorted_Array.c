int removeDuplicates(int* nums, int numsSize){
    int uniqueIndex = 0;

    if (numsSize <= 1)
        return numsSize;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[uniqueIndex]) {
            uniqueIndex++;
            nums[uniqueIndex] = nums[i];
        }
    }

    return uniqueIndex + 1;
}

