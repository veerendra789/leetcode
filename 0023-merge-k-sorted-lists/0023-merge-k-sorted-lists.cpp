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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> res;
        for(int list=0;list<lists.size();list++){
            ListNode* temp=lists[list];
            while(temp!=nullptr){
                res.push_back(temp->val);
                temp=temp->next;
            }
        }
        if(res.empty()) return nullptr;
        sort(res.begin(),res.end());
        ListNode* head=new ListNode(res[0]);
        ListNode* mover=head;
        for(int i=1;i<res.size();i++){
            ListNode* temp=new ListNode(res[i]);
            mover->next=temp;
            mover=temp;
        }
        return head;
    }
};