#define _CRT_SECURE_NO_WARNINGS 1

////leetcode88. 合并两个有序数组
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//    int n1 = m - 1;
//    int n2 = n - 1;
//    int end = m + n - 1;
//
//    while (n2 >= 0 && n1 >= 0)
//    {
//        if (nums2[n2] > nums1[n1])
//        {
//            nums1[end] = nums2[n2];
//            n2--;
//        }
//        else
//        {
//            nums1[end] = nums1[n1];
//            n1--;
//        }
//        end--;
//    }
//
//    while (n2 >= 0)
//    {
//        nums1[end] = nums2[n2];
//        n2--;
//        end--;
//    }
//}


////Leetcode 26. 删除有序数组中的重复项
//int removeDuplicates(int* nums, int numsSize) {
//    int a = 0, b = 0;
//    while (b < numsSize)
//    {
//        if (nums[a] == nums[b])
//        {
//            b++;
//        }
//        else
//        {
//            a++;
//            nums[a] = nums[b];
//        }
//    }
//    return a + 1;
//}