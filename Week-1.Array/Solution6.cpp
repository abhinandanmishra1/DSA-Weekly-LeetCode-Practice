/*
    Problem Name - [1480. Running Sum of 1d Array]
    Read this blog - [https://www.thecodingshala.com/2020/08/leetcode-running-sum-of-1d-array.html]
*/
// My Solution
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        for(auto x:nums){
            if(ans.size()==0){
                ans.push_back(x);
            }else{
                ans.push_back(x+ans.back());
            }
        }
        return ans;
    }
};