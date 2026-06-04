class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,j=0,k=nums.size()-1;
        while(j<=k){
            if(nums[j]==0){
                int temp1=nums[j];
                nums[j]=nums[i];
                nums[i]=temp1;
                j++;
                i++;
            }
            else if(nums[j]==2){
                int temp=nums[j];
                nums[j]=nums[k];
                nums[k]=temp;
                // j++;
                k--;
            }
            else{
                j++;
            }
            //cout << nums[j];
        }
    }
};