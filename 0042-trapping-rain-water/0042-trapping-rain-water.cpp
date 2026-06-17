class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
        vector<int> pre(n);
        vector<int> suf(n);
        pre[0]=arr[0];
        for(int i=1;i<n;i++){
            pre[i]=max(pre[i-1],arr[i]);
        }
        suf[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=max(suf[i+1],arr[i]);
        }
        int t=0;
        for(int i=0;i<n;i++){
            int l=pre[i],r=suf[i];
            if(l>arr[i] && r>arr[i]){
                t+=min(l,r)-arr[i];
            }
        }
        return t;
    }
};