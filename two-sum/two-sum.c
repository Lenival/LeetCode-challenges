

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
        int i=0, j=1;
        int* result = (int*)malloc(sizeof(int)*2);
        *returnSize = 2;
        for(;i<numsSize-1;i++){
            for(j=i+1;j<numsSize;j++){
                if (nums[i]+nums[j]==target){
                    result[0]= i;
                    result[1]= j;
                    return result;
                }
            }
        }
        result[0]= i-1;
        result[1]= j-1;
        return result;
}