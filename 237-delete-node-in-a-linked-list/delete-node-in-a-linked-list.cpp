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
        //TC=O(1), SC=O(1)
        node->val = node->next->val; //copy the value of next node to the existing node
        node->next = node->next->next; //skip the duplicate node
    }
};