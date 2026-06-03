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
class Solution {
public:
    int getDecimalValue(ListNode* head) {
      ListNode* temp=head;
      string s="";
      while(temp){
        int si=temp->val;
        s+=(to_string(si));
        temp=temp->next;
      }
      //string b=to_string(a);
      int num=stoi(s,nullptr,2);
      return num;
    }

};