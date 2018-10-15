/* file_name : main.cpp
 * author_name : Smitkumar Contractor
 * contact : smitcontractor@gmail.com
 * brief : You are given two non-empty linked lists representing two
  non-negative integers. The digits are stored in reverse order and each of
  their nodes contain a single digit. Add the two numbers and return it as a
  linked list. You may assume the two numbers do not contain any leading zero,
  except the number 0 itself.
  Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
  Output: 7 -> 0 -> 8
  Explanation: 342 + 465 = 807.
 */

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
     unsigned long long int number(ListNode* temp) {
        unsigned long long int sum = 0;
        unsigned long long int mult = 1;
        while (temp != NULL) {
            sum = (temp->val * mult) + sum;
            temp = temp->next;
            mult = mult * 10;
        }
        cout << sum << endl;
        return sum;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        unsigned long long int num_l1 = number(l1);
        unsigned long long int num_l2 = number(l2);
        unsigned long long int sum = num_l1 + num_l2;
        unsigned long long int val = 0;
        ListNode* head = NULL;
        ListNode* temp = head;
        while (sum != 0) {
            val = sum % 10;
            if (head == NULL) {
                head = new ListNode(val);
                temp = head;
            } else {
                temp->next = new ListNode(val);
                temp = temp->next;
            }
            sum = sum / 10;
        }
        temp = head;
        while (temp != NULL) {
            temp = temp->next;
        }
        if (head == NULL)
            head = new ListNode(0);
        return head;
    }
};
