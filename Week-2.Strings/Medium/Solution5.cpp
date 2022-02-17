/*
    Problem Name - [22. Generate Parentheses]
    Read this blog - []
*/
// My Solution
class Solution {
public:
    bool validParentheses(string &s){
        stack<char> st;
        int i=0;
        while(i<s.length()){
            if(s[i]=='('){
                st.push('(');
            }else{
                if(st.empty()) return false;
                st.pop();
            }
            i++;
        }
        return st.empty();
    }
    void generate(int i,int n,string s,vector<string> &ans){
        if(i==n){
            if(validParentheses(s)){
                ans.push_back(s);
            }
            return;
        }
        
        s.push_back('(');
        generate(i+1,n,s,ans);
        s.pop_back();
        s.push_back(')');
        generate(i+1,n,s,ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate(0,2*n,"",ans);
        return ans;
    }
};