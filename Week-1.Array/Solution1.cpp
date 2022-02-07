//Problem Name - Two Sum
//Read this Blog - https://www.tutorialcup.com/leetcode-solutions/two-sum-leetcode-solution.htm

//My solution 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int i=0;
        for(auto x:nums){
            int diff=target-x;
            if(mp.find(diff)!=mp.end()){
                return {i,mp[diff]};
            }
            mp[x]=i++;
        }
        return {-1,-1};
    }
};
