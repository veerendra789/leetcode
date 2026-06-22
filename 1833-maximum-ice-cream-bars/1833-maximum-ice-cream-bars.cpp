class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n =costs.size();
        int maxi = *max_element(costs.begin(),costs.end());
        vector<int> freq(maxi + 1,0);
        for(int i = 0; i < n;i++){
            freq[costs[i]]++;
        }
        int cnt = 0;
        int rupees = coins;
        for(int i = 1; i <= maxi ; i ++){
            if(freq[i] == 0){
                continue;
            }
            int canbuy=min(freq[i],rupees/i);
            cnt+=canbuy;
            rupees-=(canbuy*i);
            if (rupees < i) continue;
        }
        return cnt;

    }
};