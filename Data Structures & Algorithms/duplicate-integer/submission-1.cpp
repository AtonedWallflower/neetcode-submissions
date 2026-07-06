class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> mp;
        bool ans=false;
        for(auto i:nums){
            if(mp[i]>0){
                ans=true;
                break;
            }
            mp[i]+=1;
        }
       
        return ans;
    }
};