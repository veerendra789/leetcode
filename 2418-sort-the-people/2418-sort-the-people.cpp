class Solution {
public:
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
        map<int,string,greater<int>> mp1;
        for(int i=0;i<h.size();i++){
            mp1[h[i]]=n[i];
        }
        vector<string> a;
        for(auto it1:mp1){
            cout<<it1.first<<endl;
            a.push_back(it1.second);
        }
        return a;
    }
};