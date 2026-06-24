class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int,pair<int,int>>> q;
        int n=nums1.size(),m=nums2.size();
        for(int i=0;i<n;i++){
            int s=0;
            for(int j=0;j<m;j++){
                s=nums1[i]+nums2[j];
                if(q.size()<k){
                    q.push({s,{nums1[i],nums2[j]}});
                }
                else{
                    if(s<q.top().first){
                        q.push({s,{nums1[i],nums2[j]}});
                        q.pop();
                    }
                    else{
                        break;
                    }
                }
            }
            
        }
        vector<vector<int>> res;
        int key=q.size();
        while(key--){
            vector<int> t;
            t.push_back(q.top().second.first);
            t.push_back(q.top().second.second);
            res.push_back(t);
            q.pop();
        }
        return res;
    }
};