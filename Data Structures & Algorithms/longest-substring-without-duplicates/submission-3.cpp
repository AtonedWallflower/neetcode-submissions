class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int i=0;
        int ans=0;
        unordered_set <char> seen;
        for(int j=0;j<n;j++){
            while(seen.count(s[j])){
                seen.erase(s[i]);
                i++;
            }
            seen.insert(s[j]);
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};
