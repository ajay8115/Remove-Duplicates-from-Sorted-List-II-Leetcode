// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *dummy = new ListNode(0, head);
        ListNode *pre = dummy;
        while (head != NULL)
        {
            if (head->next != NULL and head->val == head->next->val)
            {
                while (head->next != NULL and head->val == head->next->val)
                {
                    head = head->next;
                }

                pre->next = head->next;
            }
            else
            {
                pre = pre->next;
            }
            head = head->next;
        }

        return dummy->next;
    }
};
