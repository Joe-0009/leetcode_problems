/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *head;
    struct ListNode *dummy;

    dummy = malloc(sizeof(struct ListNode));
    if (dummy == NULL)
        return NULL;
    if (list1 == NULL) {
        free(dummy); // Free the dummy node
        return list2;
    } else if (list2 == NULL) {
        free(dummy); // Free the dummy node
        return list1;
    }
    head = dummy;
    while (list1 != NULL && list2 != NULL) {
        if (list1->val >= list2->val) {
            dummy->next = list2;
            list2 = list2->next;
        } else if (list1->val <= list2->val){
            dummy->next = list1;
            list1 = list1->next;
        }
        dummy = dummy->next;
    }
    if (list1 != NULL) {
        dummy->next = list1;
    } else if (list2 != NULL) {
        dummy->next = list2;
    }
    head = head->next;
   
    return head;
}

