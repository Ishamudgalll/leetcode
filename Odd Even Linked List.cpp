class Solution {
public:
ListNode* oddEvenList(ListNode* head)
{
if(head==NULL || head->next==NULL || head->next->next==NULL)
{
return head;
}
else
{
ListNode *odd=head;
ListNode *even = head->next;
ListNode *evenHead=even;

        while(even!=NULL && even->next!=NULL)
        {
            odd->next = even->next;
            odd = even->next;
            
            even->next=odd->next;
            even=odd->next;
        }
        odd->next=evenHead;
    return head;
    }
}
};
