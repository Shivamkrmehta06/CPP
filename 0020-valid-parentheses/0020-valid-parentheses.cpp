class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            char x=s[i];
            if(x=='('||x=='['||x=='{'){
                st.push(x);
            }else{
                if(st.empty()) return false;
                char top=st.top();
                if((x==')'&&top!='(')||(x=='}'&&top!='{')||(x==']'&&top!='[')) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};