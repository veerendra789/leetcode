class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1;
        int maxi=0;
        while(l<r){
            int h=min(height[l],height[r]);
            int w=r-l;
            int cap=h*w;
            maxi=max(maxi,cap);
            if(h==height[l]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxi;
    }
};