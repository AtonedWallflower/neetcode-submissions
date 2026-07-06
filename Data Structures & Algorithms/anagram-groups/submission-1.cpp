class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> temp;
        vector<pair<string, int>> indices;
        temp=strs;
        for(int i=0;i<temp.size();i++){
            sort(temp[i].begin(),temp[i].end());
            indices.emplace_back(temp[i], i);
        }
        sort(indices.begin(),indices.end());
        vector<vector<string>> ans;
        int i=0;
        int n=strs.size();
        vector<string> sub;
        while(i<n){
            while(i<n-1 && indices[i].first==indices[i+1].first){
                sub.emplace_back(strs[indices[i].second]);
                i++;
            }
            sub.emplace_back(strs[indices[i].second]);
            ans.emplace_back(sub);
            sub.clear();
            i++;
        }
        return ans;

    }
};
