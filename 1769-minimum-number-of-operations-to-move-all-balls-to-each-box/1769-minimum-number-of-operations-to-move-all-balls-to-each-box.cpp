class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> ind;
        for (int i =0;i<n;i++){
            if(boxes[i]=='1'){
                ind.push_back(i);
            }
        }
        vector<int> res;
        for(int i=0;i<n;i++){
            int s=0;
            for(int j=0;j<ind.size();j++){
                s+=abs(ind[j]-i);
            }
            res.push_back(s);
        }
        return res;
    }
};