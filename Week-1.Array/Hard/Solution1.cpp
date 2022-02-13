/*
    Problem Name - [41. First Missing Positive]
    Read this blog - [https://medium.com/@percivale/leetcode-solution-41-first-missing-positive-cd004fe01dd6]
*/
// My Solution
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
      unordered_map<int ,int> mp;
        int max=INT_MIN;
        bool flag=false;
      for(auto x:nums){
          if(x>0){
              mp[x]++;
              flag=true;
          }
          if(x>max){
              max=x;
          }
      }
        for(int i=1;i<=max;i++ ){
            if(mp.find(i)==mp.end()){
                return i;
            }
        }
        if(flag)
        return max+1;
        return 1;
    }
};