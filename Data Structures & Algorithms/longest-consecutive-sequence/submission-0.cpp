class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int ans=0;
        for(int x:s){
            if(s.find(x-1)==s.end()){
                int curr=x;
                int currlen=1;
                while(s.count(curr+1)){
                    curr++;
                    currlen++;
                }
                ans=max(ans,currlen);
            }
        }
        return ans;
    }
};
