/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* oddEvenList(struct ListNode* head){
    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    struct ListNode* oddHead = head;
    struct ListNode* evenHead = head->next;
    struct ListNode* odd = oddHead;
    struct ListNode* even = evenHead;

    while (even && even->next) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenHead;
    return oddHead;
}
