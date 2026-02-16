int removeElement(int* nums, int numsSize, int val) {
    int i,j,c=0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==val)
        {
            c++;
        }
        else
        {
            nums[i-c]=nums[i];
        }
    }
    j=numsSize-c;
    return j;
}
