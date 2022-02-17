/*
    Problem Name - []
    Read this blog - []
*/
// My Solution
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        queue<char> q;
        unordered_map<char,int> mp;
        int count=0,max=0,st=0,l=0;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])!=mp.end()){
                l=mp[s[i]]+1>l?mp[s[i]]+1:l;   
            }
            count=i-l+1;
             mp[s[i]]=i;
            if(max<count){
                max=count;
            }
            
        }
        return max;
    }
};