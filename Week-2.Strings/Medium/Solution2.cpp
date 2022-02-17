/*
    Problem Name - [1249. Minimum Remove to Make Valid Parentheses]
    Read this blog - []
*/
// My Solution
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> st;
        string ans="";
        int i=0;
        while(i<s.length()){
            if(s[i]=='(' or s[i]==')'){
                if(s[i]=='('){
                    ans+='(';
                    st.push('(');
                }else{
                    if(!st.empty()){
                        ans+=')';
                        st.pop();
                    }
                }
            }else{
                ans+=s[i];
            }
            i++;
        }
        int count=st.size();
        i=ans.length()-1;
        string temp="";
        while(i>=0){
            if(ans[i]=='(' and count>0){
                count--;
                i--;
            }else{
                temp+=ans[i];
                i--;
            }
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};