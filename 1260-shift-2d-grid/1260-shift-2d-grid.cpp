class Solution {
   void reverse(vector<int> &a,int l,int r){
        while(l<=r){
            int t=a[l];
            a[l]=a[r];
            a[r]=t;
            l++;
            r--;
        }
        //return a;
    }
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int> arr;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr.push_back(grid[i][j]);
            }
        }
        int s=arr.size();
        k=k%s;
        reverse(arr,0,s-1);
        reverse(arr,0,k-1);
        reverse(arr,k,s-1);
        int l=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                grid[i][j]=arr[l];
                l++;
            }
        }
        return grid;
    }
};