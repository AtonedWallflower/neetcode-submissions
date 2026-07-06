class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> mp;
        bool ans=false;
        for(auto i:nums){
            mp[i]+=1;
        }
        for(auto i:mp){
            if(i.second>1){
                ans=true;
                break;
            }
        }
        return ans;
    }
};