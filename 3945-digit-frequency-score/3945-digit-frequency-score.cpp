class Solution {
public:
    int digitFrequencyScore(int n) {
        map<int,int> freq;
        while(n>0){
            int d=n%10;
            freq[d]++;
            n=n/10;
        }
        int t=0;
        for(auto it:freq){
            t+=(it.first*it.second);
        }
        return t;
    }
};