class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* prev = NULL;
        while(slow){
            ListNode* next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }
        int mx = 0;
        while(prev){
            mx = max(mx, head->val + prev->val);
            head = head->next;
            prev = prev->next;
        }
        return mx;
    }
};