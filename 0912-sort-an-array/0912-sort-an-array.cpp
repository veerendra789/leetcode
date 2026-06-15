class Solution {
public:
void merge(vector<int> &nums,int l,int mid,int h){
    int left=l;
    int right=mid+1;
    vector<int> temp;
    while(left<=mid && right<=h){
        if(nums[left]<=nums[right]){
            temp.push_back(nums[left++]);
        }
        else{
            temp.push_back(nums[right++]);
        }
    }
    while(left<=mid){
        temp.push_back(nums[left++]);
    }
    while(right<=h){
        temp.push_back(nums[right++]);
    }
    for(int i=l;i<=h;i++){
        nums[i]=temp[i-l];
    }
}
void mergesort(vector<int> &nums,int l,int h){
    if(l>=h) return ;
    int mid=l+(h-l)/2;
    mergesort(nums,l,mid);
    mergesort(nums,mid+1,h);
    merge(nums,l,mid,h);
}
    vector<int> sortArray(vector<int>& nums) {
      int l=0,r=nums.size()-1;
      //vector<int> res;
      mergesort(nums,l,r); 
      return nums; 
    }
};