class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int i=0,j=0;
        int maxi=INT_MIN;
        int n=nums.size();
        while((j-i+1)<k){
            if(nums[j]>maxi){
                maxi=max(maxi,nums[j]);
            }  
            j++;
        }
        maxi=max(nums[j],maxi);
        ans.emplace_back(maxi);
        while(j!=n-1){
            if(nums[i]==maxi && j<n-1){
                i++;
                j++;
                maxi=nums[i];
                for(int k=i;k<=j;k++){
                    // if(i!=j) 
                    maxi=max(maxi,nums[k]);
                    // else maxi=nums[k];
                }
                ans.emplace_back(maxi);    
            }
            else{
                j++;
                i++;
                if(j<n) maxi=max(maxi,nums[j]);
                ans.emplace_back(maxi);
            }
        }
        return ans;


    }
};
