class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp1;
        map<char,int> mp2;
        bool ans=true;
        for(auto i:s){
            mp1[i]+=1;
        }
        for(auto i:t){
            mp2[i]+=1;
        }
        string temp;
        if(s.size()>=t.size()){
            temp=s;
        }
        else temp=t;
        for(auto i:temp){
            if(mp1[i]!=mp2[i]){
                ans=false;
                break;
            }
        }
        return ans;

    }
};
