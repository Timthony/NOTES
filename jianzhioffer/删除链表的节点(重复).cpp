//面试题18：删除链表的节点

struct ListNode
{
    int m_nValue;
    ListNode *m_pNext;
};

void DeleteNode(ListNode **pListHead, ListNode *pToBeDeleted)
{
    if(!pToBeDeleted || !pListHead)
    {
        return;
    }
    //要删除的节点不是尾节点
    if(pToBeDeleted->m_pNext != nullptr)
    {
        ListNode *pNext = pToBeDeleted->m_pNext;
        pToBeDeleted->m_nValue = pNext->m_nValue;
        pToBeDeleted->m_pNext = pNext->m_pNext;
        delete pNext;
        pNext = nullptr;
    }
    //链表只有一个节点，也就是删除头结点或者尾节点
    else if(*pListHead = pToBeDeleted)
    {
        delete pToBeDeleted;
        pToBeDeleted = nullptr;
        *pListHead = nullptr;
    }
    //在链表有多个节点的情况下删除尾节点，只能顺序遍历
    else
    {
        ListNode *pNode = *pListHead;
        while(pNode->m_pNext != pToBeDeleted)
        {
            pNode = pNode->m_pNext;
        }
        pNode->m_pNext = nullptr;
        delete pToBeDeleted;
        pToBeDeleted = nullptr;
    }
}


//删除链表中重复的节点


void DeleteDuplication(ListNode **pHead)
{
    if(pHead == nullptr || *pHead == nullptr)
    {
        return;
    }
    ListNode *pPreNode = nullptr;
    ListNode *pNode = *pHead;
    while(pNode != nullptr)
    {
        ListNode *pNext = pNode->m_pNext;
        bool needDelete = false;
        if(pNext != nullptr && pNode->m_nValue == pNext->m_nValue)
        {
            needDelete = true;
        }
        if(!needDelete)
        {
            pPreNode = pNode;
            pNode = pNode->m_pNext;
        }
        else
        {
            //删除当前pNode和pNext
            int value = pNode->m_nValue;
            ListNode *pToBeDel = pNode;
            while(pToBeDel != nullptr && pToBeDel->m_nValue == value)
            {
                pNext = pToBeDel->m_pNext;
                delete pToBeDel;
                pToBeDel = nullptr;

                pToBeDel = pNext;
            }
            if(pPreNode == nullptr)
            {
                *pHead = pNext;
            }
            else
            {
                pPreNode->m_pNext = pNext;
            }
            pNode = pNext;
        }
    }
}

/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/


class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        //递归解法
        /*
        if(pHead==NULL)
        {
            return NULL;
        }
        if(pHead!=NULL && pHead->next==NULL)
        {
            return pHead;
        }
        ListNode *pNode;
        if(pHead->next->val == pHead->val)
        {
            pNode = pHead->next->next;
            while(pNode != NULL && pNode->val == pHead->val)
            {
                pNode = pNode->next;
            }
            return deleteDuplication(pNode);
        }
        
        else{
            pNode = pHead->next;
            pHead->next = deleteDuplication(pNode);
            return pHead;
        }
        */
        
        //常规解法
        if(pHead == NULL)
        {
            return NULL;
        }
        if(pHead != NULL && pHead->next==NULL)
        {
            return pHead;
        }
        ListNode *pPreNode = nullptr;
        ListNode *pNode = pHead;
        while(pNode != nullptr)
        {
            ListNode *pNext = pNode->next;
            bool needDelete = false;
            if(pNext != nullptr && pNode->val == pNext->val)
            {
                needDelete = true;
            }
            if(!needDelete)
            {
                pPreNode = pNode;
                pNode = pNode->next;
            }
            else
            {
                //删除当前的节点pNode和pNext
                int value = pNode->val;
                ListNode *pToDel = pNode;
                while(pToDel != nullptr && pToDel->val == value)
                {
                    pNext = pToDel->next;
                    delete pToDel;
                    pToDel = nullptr;
                    pToDel = pNext;
                }
                if(pPreNode == nullptr)
                {
                    pHead = pNext;
                }
                else
                {
                    pPreNode->next = pNext;
                }
            }
            pNode = pNext;
        }
        return pHead;
        
 

    }
};