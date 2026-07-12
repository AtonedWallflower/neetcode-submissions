class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int ans;
        int n=tokens.size();
        for(int i=0;i<n;i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
                st.push(stoi(tokens[i]));
            }
            else if(tokens[i]=="+"){
                int num1=st.top();
                st.pop();
                int num2=st.top();
                st.pop();
                ans=num1+num2;
                st.push(ans);            
            }
            else if(tokens[i]=="-"){
                int num1=st.top();
                st.pop();
                int num2=st.top();
                st.pop();
                ans=num2-num1;
                st.push(ans);
            }
            else if(tokens[i]=="*"){
                int num1=st.top();
                st.pop();
                int num2=st.top();
                st.pop();
                ans=num1*num2;
                st.push(ans);
            }
            else{
                int num1=st.top();
                st.pop();
                int num2=st.top();
                st.pop();
                ans=num2/num1;
                st.push(ans);
            }
        }
        ans=st.top();
        return ans;
    }
};
