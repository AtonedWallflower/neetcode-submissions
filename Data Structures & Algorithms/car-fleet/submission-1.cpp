class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> pairs;
        for(int i=0;i<speed.size();i++) pairs.push_back({position[i],speed[i]});
        sort(pairs.rbegin(),pairs.rend());
        double prev=(double)(target-pairs[0].first)/pairs[0].second;
        int ans=1;
        for(int i=1;i<speed.size();i++){
            double curr=(double)(target-pairs[i].first)/pairs[i].second;
            if(curr>prev){
                ans++;
                prev=curr;
            }
        }
        return ans;
    }
};
