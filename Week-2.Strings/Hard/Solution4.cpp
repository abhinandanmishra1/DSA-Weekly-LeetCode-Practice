/*
    Problem Name - [65. Valid Number]
    Read this blog - []
*/
// My Solution
class Solution {
public:
    bool yes(char &s){
        return s=='.' or s=='+' or s=='-' or (s>='0' and s<='9') or s=='e' or s=='E';
    }
    bool isNumber(string s) {
        int n=s.length();
        if(n==1){
            return (s[0]>='0' and s[0]<='9');
        }
        int i=0;
        bool flag=false;
        bool m=false;
        bool ee=false;
        bool nu=true;
        while(i<n){
            if(yes(s[i])){
                
                if(s[i]=='+' or s[i]=='-'){
                    if(!(i==0 or s[i-1]=='e' or s[i-1]=='E') or i==n-1){
                        return false;
                    }
                    if(i==0 and !((s[i+1]>='0' and s[i+1]<='9') or s[i+1]=='.'))return false;
                    if((flag or m) and !(s[i-1]=='e' or s[i-1]=='E') ){
                        return false;
                    }else{
                        flag=true;
                    }
                }else if(s[i]=='e' or s[i]=='E'){
                    flag=false;
                    if(m and nu) return false;
                    if(ee) return false;
                    if(i>0 and i<n-1){
                        ee=true;
                    }else{
                        return false;
                    }
                }else if(s[i]=='.'){
                    if(m) return false;
                    if(ee) return false;
                    if(nu and i==n-1) return false;
                    m=true;
                }else{
                    nu=false;
                }
            }else{
                return false;
            }
            i++;
        }
        return true;
    }
};