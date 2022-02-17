/*
    Problem Name - [151. Reverse Words in a String]
    Read this blog - []
*/
// My Solution
class Solution {
public:
    string reverseWords(string s) {
           vector<string> save;
           int i=0;
           while(i<s.length()){
               while(i<s.length() and s[i]==' ') i++;
               
               string ans="";

               while(i<s.length() and s[i]!=' '){
                   ans+=s[i++];  
               }
               if(ans.size()>0)
               save.push_back(ans);
           } 
            string ans="";
            for(int i=save.size()-1;i>=0;i--){
                ans+=save[i];
                if(i!=0) ans+=" ";
            }
         return ans;
    }
};