class Solution {
public:
    int findLucky(vector<int>& arr) {
       map<int,int> mp;
       for(int num:arr){
        mp[num]++;
       } 
       vector<int> a;
       for(auto it:mp){
        if(it.first==it.second){
            a.push_back(it.first);
        }
       }
       if(!a.empty()){
        return *max_element(a.begin(),a.end());
       }
       return -1;
    }
};