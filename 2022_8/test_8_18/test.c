#define _CRT_SECURE_NO_WARNINGS 1


//JZ11 ��ת�������С����
//int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
//    // write code here
//    int left = 0;
//    int right = rotateArrayLen - 1;
//    int mid = 0;
//
//    if (rotateArray[right] > rotateArray[left])
//        return rotateArray[0];
//
//    while (left < right)
//    {
//        mid = (left + right) / 2;
//        if (rotateArray[right] < rotateArray[mid])
//        {
//            left = mid + 1;
//        }
//        else if (rotateArray[right] == rotateArray[mid])
//        {
//            right--;
//        }
//        else
//        {
//            right = mid;
//        }
//    }
//    return rotateArray[left];
//}