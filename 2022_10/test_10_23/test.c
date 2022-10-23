#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//Leetcode: 189. 轮转数组
//void reve(int* nums, int sz)
//{
//    int left = 0;
//    int right = sz - 1;
//    while (left < right)
//    {
//        int tmp = nums[left];
//        nums[left] = nums[right];
//        nums[right] = tmp;
//        left++;
//        right--;
//    }
//}
//
//void rotate(int* nums, int numsSize, int k) {
//    if (k > numsSize)
//        k %= numsSize;
//    reve(nums, numsSize);
//
//    reve(nums, k);
//
//    reve((nums + k), (numsSize - k));
//}

//Leetcode: 面试题 17.04. 消失的数字
//int missingNumber(int* nums, int numsSize) {
//    int ret = 0;
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        ret ^= nums[i];
//    }
//    for (i = 0; i < numsSize + 1; i++)
//    {
//        ret ^= i;
//    }
//    return ret;
//}

//struct A
//{
//	unsigned char a;
//	unsigned char b : 2;
//	unsigned char c : 2;
//	unsigned char d : 1;
//};
//
//int main()
//{
//	int ret = sizeof(struct A);
//	printf("%d\n", ret);
//	return 0;
//}


