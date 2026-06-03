class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int m=nums.size();
        int a=0;
        int b;
        for(int i=0;i<m;i++){
             a+=four(nums[i]);
        }
        return a;
    }
    int four(int n){
        int c=0;
        int s=0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                int d1=i;
                int d2=n/i;
                if(d1==d2){
                    c++;
                    s+=d1;
                }
                else{
                    c+=2;
                    s+=d1+d2;
                    //cout<<s<<" ";

                }
                if(c>4){
                     return 0;
                }
            }
        }
        
        return c==4 ? s: 0;
    }
};