class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int n=prices.size();
        int mini=prices[0];
        int curr;
        int i=1;
        while(i<n){
            curr=prices[i];
            if(curr>mini){
                ans=max(ans,curr-mini);
                i++;
            }
            else{
                mini=curr;
                i++;
            }
        }
        return ans;
    }
};
