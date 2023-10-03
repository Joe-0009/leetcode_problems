/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){
    
    struct ListNode *temp = head;
    struct ListNode *duplicate;
    if (head == NULL )
    {
        return (NULL);
    }
    while (temp != NULL && temp->next != NULL)
    {
        if (temp->val == temp->next->val)
        {
            duplicate = temp->next;
            temp->next = duplicate->next;
            free(duplicate);
        }else {
           
            temp = temp->next;
        }
    }
    return (head);
}
