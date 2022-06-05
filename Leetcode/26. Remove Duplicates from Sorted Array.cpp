

int removeDuplicates(int* nums, int numsSize){
    if(numsSize <= 0) return 0;
    int i, j, count = 1;
    for(i = 1, j = 0; i < numsSize; i++) {
        if(nums[j] != nums[i]) { nums[++j] = nums[i]; count++; }
    }
    return count;
}
