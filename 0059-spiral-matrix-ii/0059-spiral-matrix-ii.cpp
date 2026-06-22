class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> spiral(n,vector<int>(n));
        int c=1;
        int top=0,left=0,right=n-1,bottom=n-1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                spiral[top][i]=c;
                c++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                spiral[i][right]=c;
                c++;
            }
            right--;
            for(int i=right;i>=left;i--){
                spiral[bottom][i]=c;
                c++;
            }
            bottom--;
            for(int i=bottom;i>=top;i--){
                spiral[i][left]=c;
                c++;
            }
            left++;
        }
        return spiral;
    }
};