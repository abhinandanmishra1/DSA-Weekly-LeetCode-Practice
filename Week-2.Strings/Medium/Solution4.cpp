/*
    Problem Name - [49. Group Anagrams]
    Read this blog - []
*/
// My Solution
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(auto x:strs){
            vector<int> count(26,0);
            for(auto y:x){
                int i=y-'a';
                count[i]++;
            }
            string s="";
            for(int i=0;i<26;i++){
                s+=to_string(count[i])+"-";
            }
            mp[s].push_back(x);
        }
        vector<vector<string>> ans;
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};