#define _CRT_SECURE_NO_WARNINGS 1

//leetcode: 27. ÒÆ³ýÔªËØ
//int removeElement(int* nums, int numsSize, int val) {
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        nums[i] -= val;
//    }
//
//    int a = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if (0 != nums[i])
//        {
//            nums[a] = nums[i] + val;
//            a++;
//        }
//    }
//    return a;
//}