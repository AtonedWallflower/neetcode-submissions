class Solution {
public:
    bool isValid(string s) {
        bool ans=true;
        int n=s.size();
        if(n%2!=0){
            ans=false;
            return ans;
        }
        unordered_map<char,char> mp;
        mp[')']='(';
        mp['}']='{';
        mp[']']='[';
        mp['(']='a';
        mp['{']='a';
        mp['[']='a';
        stack<char> st;
        for(char c:s){
            if(mp[c]=='a'){
                st.push(c);
            }
            else{
                if(!st.empty() && mp[c]==st.top()){
                    st.pop();
                }
                else{
                    ans=false;
                    return ans;
                }
            }
        }
        if(!st.empty()) ans=false;
        return ans;
        
    }
};
