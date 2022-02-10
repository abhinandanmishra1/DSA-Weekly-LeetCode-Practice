/*
    Problem Name - [560. Subarray Sum Equals K]
    Read this blog - [https://www.youtube.com/watch?v=HbbYPQc-Oo4]
*/
// My Solution
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0;
        int n=nums.size();
        unordered_map<int,int> mp;
        int sum=0;
        mp[0]++;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end()){
                ans+=mp[sum-k];
            }
            mp[sum]++;
        }
        return ans;
    }
};


// Bruteforce is to traverse through all the subarrays and find sum==k
// but it will give tle
// But if we store sum as we proceed further and always check if sum-k is present 
//at any place previously then add it to ans( ans+=mp[sum-k] => mp[sum-k] means all 
//times mp[sum-k] has been came)