/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    bool has_cycle = false;
    
    while(!has_cycle && fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        has_cycle = slow == fast;
    }
    if(!has_cycle){
        return false;
    }
    struct ListNode *p = head;
    while(p != slow){
        p = p->next;
        slow = slow->next;
    }
    return p;
}