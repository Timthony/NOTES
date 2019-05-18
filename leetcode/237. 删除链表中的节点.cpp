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
    void deleteNode(ListNode* node) {
        //只给定了要删除的节点，没办法得到之前的节点
        //将要删除节点的后节点的值覆盖掉要删除的那个节点，然后要删除的节点，指向下下个节点，这样就等价于删除了
        //将要删除的节点转换为删除下一个节点
        
        ListNode* nextnode = node->next;
        node->val = nextnode->val;
        node->next = nextnode->next;   
        
    }
};
