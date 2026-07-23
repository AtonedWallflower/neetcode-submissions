class Solution {
public:
    int findMin(vector<int> &nums) {
        int i=0;
        int j=nums.size()-1;
        int ans=1000;
        int mid;
        while(i<=j){
            mid=i+(j-i)/2;
            if(nums[i]>nums[mid] || nums[mid]<nums[j]){
                j=mid-1;
            }
            else i=mid+1;
            ans=min(ans,nums[mid]);
        }
        return ans;
    }
    
};
