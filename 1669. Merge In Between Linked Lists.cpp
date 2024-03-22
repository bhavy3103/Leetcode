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
  ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
  {
    ListNode *temp = list1;
    int start = a - 1;
    while (start--)
      temp = temp->next;

    ListNode *end = temp->next;
    int k = (b - a + 1);
    while (k--)
      end = end->next;

    temp->next = list2;
    while (list2->next)
      list2 = list2->next;

    list2->next = end;

    return list1;
  }
};