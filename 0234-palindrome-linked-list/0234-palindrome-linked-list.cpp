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
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return true;
        }
       ListNode* current=head;
       vector<int> a;
       while(current!=nullptr){
        a.push_back(current->val);
        current=current->next;
       } 
       int i=0,j=a.size()-1;
       while(i<j){
        if(a[i]!=a[j]){
            return false;
        }
        i+=1;
        j-=1;
       }
        return true;
    }
};