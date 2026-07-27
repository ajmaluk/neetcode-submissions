class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='{' || s[i]=='[' || s[i]=='('){
                st.push(s[i]);
            }else{
                if (st.empty())
                    return false;
                char para = st.top();
                st.pop();
                if((s[i]=='}' && para!='{') || (s[i]==')' && para!='(') || (s[i]==']' && para!= '[')) return false;
            }
        }
        return st.empty();
    }
};
