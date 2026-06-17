class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int n=m.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int temp=m[i][j];
                m[i][j]=m[j][i];
                m[j][i]=temp;
            }
        }
        for(int i=0;i<n;i++){
            int l=0,r=n-1;
            while(l<r){
                int t=m[i][l];
                m[i][l]=m[i][r];
                m[i][r]=t;
                l++;
                r--;
            }
        }
    }
};