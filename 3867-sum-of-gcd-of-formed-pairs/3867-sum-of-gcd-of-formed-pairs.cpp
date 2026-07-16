class Solution {
/*long long gcd(long long a,long long b){
    while(b!=0){
        int t=a;
        b=a%b;
        a=t;
    }
    return a;
}*/
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> maxi(n);
        maxi[0]=nums[0];
        for(int i=1;i<n;i++){
            maxi[i]=max(maxi[i-1],nums[i]);
        }
        vector<int> gcdv(n);
        for(int i=0;i<n;i++){
            gcdv[i]=gcd(maxi[i],nums[i]);
        }
        sort(gcdv.begin(),gcdv.end());
        int l=0,r=n-1;
        long long c=0;
        while(l<r){
            c+=gcd(gcdv[l],gcdv[r]);
            l++;
            r--;
        }
        return c;
    }
};