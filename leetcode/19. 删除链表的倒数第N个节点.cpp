/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //设置两个指针，间隔n，然后同时开始遍历，一个指针到达末尾时，此时另一个就是倒数k个
        //注意边界情况,定义虚拟头结点
        ListNode *pre = new ListNode(0);
        pre->next = head;
        ListNode *high = pre;
        ListNode *low = pre;
        
        for(int i =0;i<n;i++)
        {
            high = high->next;
        }
        while(high->next != nullptr)
        {
            high = high->next;
            low = low->next;
        }
        ListNode *k = low->next;
        if(k == head)
        {
            head = head->next;
            delete k;
            return head;
        }
        low->next = k->next;
        delete k;
        return head;
    
    }
};
