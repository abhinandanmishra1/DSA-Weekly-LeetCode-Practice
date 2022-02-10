/*
    Problem Name - [31. Next Permutation]
    Read this blog - []
*/
// My Solution
// Using Stl 
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       next_permutation(nums.begin(),nums.end()); 
    }
};

//Implemented approach
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i=n-2;
        while(i>=0 and nums[i]>=nums[i+1] ){
            i--;  // finding the first element from right which is not foloowing non-increasing sequence
        }
        // Let's denote this Ith point as P
        if(i==-1){
            // if i==-1 it means that it is last permutation and next permuattion will 
            // ascending order
            reverse(nums.begin(),nums.end());
            return;
        }else{

            int k=n-1;
            for(;k>i;k--){
                if(nums[k]>nums[i]){
                    break;
                }
                // from right we have to find first element which is greater than our point P
                // let us take this point as S
            }
            // now swapping P and S will make the sequence greater than previous sequence 
            // but after point P all the elements are in non-increasing sequence 
            // they all should be sorted for next permutation
            // so sort the i+1 to last element 

            swap(nums[i],nums[k]);

            reverse(nums.begin()+i+1,nums.end());  // since all the elements are in non-increasing order 
            // instead of sorting we can reverse the sequence
        }


    }
};