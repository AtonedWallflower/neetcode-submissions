class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            if(mp.count(diff) && i!=mp[diff]){
                ans.emplace_back(i);
                ans.emplace_back(mp[diff]);
                break;
            }
        }
        return ans;
    }
};
