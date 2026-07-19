class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        auto it=max_element(piles.begin(),piles.end());
        int maxi=*it;
        int i=1;
        int j=maxi;
        int ans=maxi;
        while(i<=j){
            int mid=i+(j-i)/2;
            int hours=0;
            for(int k=0;k<piles.size();k++){
                if(piles[k]%mid!=0) hours+=(piles[k]/mid)+1;
                else hours+=piles[k]/mid;
            }
            if(hours>h){
                i=mid+1;
            }
            else{
                j=mid-1;
                ans=min(ans,mid);
            }
        }
        return ans;
    }
};
