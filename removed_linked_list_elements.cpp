// https://leetcode.com/problems/remove-linked-list-elements/description/

//  iterative way
class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        if (!head)
            return head;

        ListNode *prev = NULL, *curr = head;
        while (curr)
        {
            if (curr->val == val)
            {
                if (prev == NULL)
                {
                    head = curr->next;
                }
                else
                {
                    prev->next = curr->next;
                }
            }
            else
            {
                prev = curr;
            }
            curr = curr->next;
        }
        return head;
    }
};

// recursive way
class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        if (!head)
            return head;

        ListNode *h = removeElements(head->next, val);
        if (head->val == val)
            return h;
        head->next = h;
        return head;
    }
};