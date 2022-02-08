/*
    Problem Name - [26. Remove Duplicates from Sorted Array]
    Read this blog - [https://afteracademy.com/blog/remove-duplicates-in-a-sorted-array]
*/
// My Solution
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int ans=0;
        int i=0,j=1;
        while(j<nums.size()){
            if(nums[i]==nums[j]){
                j++;
            }else{
                nums[i+1]=nums[j];
                i++;
                j++;
            }
        }
        return i+1;
    }
};