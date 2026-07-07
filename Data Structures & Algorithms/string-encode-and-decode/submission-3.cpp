class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(auto it:strs){
            ans+=it;
            ans+='~';
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> strings;
        int i=0;
        while(i<s.size()){
            string temp="";
            while(i<s.size() && s[i]!='~'){
                temp+=s[i];
                i++;
            }
            strings.emplace_back(temp);
            i++;
        }
        return strings;
    }
};
