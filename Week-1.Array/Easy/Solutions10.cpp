/*
    Problem Name - [977. Squares of a Sorted Array]
    Read this blog - [Simple question No need of blog]
*/
// My Solution
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};