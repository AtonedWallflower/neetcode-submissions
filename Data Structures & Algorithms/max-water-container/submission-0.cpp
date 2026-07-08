class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i=0;
        int j=n-1;
        int ans=0;
        int temp;
        while(i<j){
            temp=min(heights[i],heights[j])*(j-i);
            ans=max(ans,temp);
            if(heights[i]<heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};
