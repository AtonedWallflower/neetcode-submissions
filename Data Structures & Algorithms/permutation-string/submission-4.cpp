class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> mp;
        for(int i=0;i<s1.size();i++) mp[s1[i]]++;
        bool ans=false;
        int i=0;
        int j=0;
        int n=s2.size();
        while(i<n){
            if(mp[s2[i]]>0){
                mp[s2[i]]--;
                i++;
            }
            else{
                if(i-j==s1.size()){
                    ans=true;
                    break;
                }
                else{
                    while(j<i){
                        mp[s2[j]]++;
                        if(s2[j]==s2[i]){
                            j++;
                            break;
                        }
                        j++;
                    }
                    if(mp[s2[i]]>0){
                        mp[s2[i]]--;
                    }
                    else{
                        j=i+1;
                    }
                    
                }
                i++;
            }
        }
        if(i-j==s1.size()) ans=true;
        return ans;
    }
};
