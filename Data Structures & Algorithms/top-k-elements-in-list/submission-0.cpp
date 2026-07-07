class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map <int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]+=1;
        }
        vector<int> ans;
        int max=0;
        int element=0;
        for(int i=0;i<k;i++){
            for(auto it:mp){
                if(it.second>max){
                    max=it.second;
                    element=it.first;
                }
            }
            ans.emplace_back(element);
            mp.erase(element);
            max=0;
        }
        return ans;
    }
};
