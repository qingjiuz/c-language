#define _CRT_SECURE_NO_WARNINGS 1


//leetcode 206. ��ת����
//struct ListNode* reverseList(struct ListNode* head) {
//	if (head == NULL)
//		return NULL;
//	struct ListNode* newhead = head, * cur = head;
//	struct ListNode* next = cur->next;
//	head->next = NULL;
//
//	while (next)
//	{
//		newhead = next;
//		next = next->next;
//		newhead->next = cur;
//		cur = newhead;
//	}
//
//	return newhead;
//}


//nowcoder �����е�����k�����
//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
//    // write code here
//
//    if (pListHead == NULL)
//        return NULL;
//
//    struct ListNode* tail = pListHead, * pos = pListHead;
//    int data = 0;
//    //����������
//    while (tail)
//    {
//        data++;
//        tail = tail->next;
//    }
//
//    if (k > data || k <= 0)
//        return NULL;
//
//    data -= k;
//
//    while (data--)
//    {
//        pos = pos->next;
//    }
//
//    return pos;
//}