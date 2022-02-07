/*
    Problem Name - [88. Merge Sorted Array]
    Read this blog - [https://www.interviewbit.com/blog/merge-two-sorted-arrays/]
*/

// My Solution

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        for(int i=m;i<n+m;++i){
            nums1[i]=nums2[i-m];
        }
        
        sort(nums1.begin(),nums1.end());
    }
};