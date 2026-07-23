class TimeMap {
private:
    unordered_map<string,vector<pair<int,string>>> keys;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        keys[key].emplace_back(timestamp,value);
    }
    
    string get(string key, int timestamp) {
        auto& values=keys[key];
        int l=0,r=values.size()-1;
        string ans="";
        while(l<=r){
            int mid=l+(r-l)/2;
            if(values[mid].first<=timestamp){
                ans=values[mid].second;
                l=mid+1;
            }
            else r=mid-1;
        }
        return ans;
    }

};
