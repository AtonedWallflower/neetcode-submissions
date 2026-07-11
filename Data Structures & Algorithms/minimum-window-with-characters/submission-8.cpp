class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> mp;
        for(char c:t) mp[c]++;
        unordered_map<char,int> window;
        int temp=t.size();
        int i=0,len=1000,start=0;
        for(int j=0;j<s.size();j++){
            window[s[j]]++;
            if(mp.count(s[j]) && window[s[j]]<=mp[s[j]]){
                temp--;
            }
            while(temp==0){
                if(j-i+1<len){
                    len=j-i+1;
                    start=i;
                }
                window[s[i]]--;
                if(mp.count(s[i]) && window[s[i]]<mp[s[i]]){
                    temp++;
                }
                i++;
            }
        }
        if(len==1000){
            return "";
        }
        else return s.substr(start,len);
    }
};
