/*
    Problem Name - [14. Longest Common Prefix]
    Read this blog - []
*/
// My Solution
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
        sort(strs.begin(),strs.end());
        string s=strs.back();
        int i=0;
        for( i=0;i<min(strs[0].length(),s.length());i++){
            if(strs[0][i]!=s[i]){
                break;
            }
        }
        return s.substr(0,i);
    }
};