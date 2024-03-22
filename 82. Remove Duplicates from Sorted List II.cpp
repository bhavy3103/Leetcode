/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
  ListNode *deleteDuplicates(ListNode *head)
  {
    ListNode *temp = head;
    unordered_map<int, int> m;

    while (temp != NULL)
    {
      m[temp->val]++;
      temp = temp->next;
    }

    temp = head;
    ListNode *prev = NULL;

    while (temp != NULL)
    {
      if (m[temp->val] > 1 && temp == head)
      {
        head = temp->next;
        temp = head;
      }
      else if (m[temp->val] > 1)
      {
        prev->next = temp->next;
        temp = prev->next;
      }
      else
      {
        prev = temp;
        temp = temp->next;
      }
    }
    return head;
  }
};