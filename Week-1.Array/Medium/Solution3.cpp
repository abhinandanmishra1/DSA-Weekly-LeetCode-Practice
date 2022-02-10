/*
    Problem Name - [238. Product of Array Except Self]
    Read this blog - [https://medium.com/nerd-for-tech/product-of-array-except-self-2ff69f34f502]
*/
// My Solution
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int cnt=0;
        for(auto x:nums){
            cnt+=x==0;
        }
        vector<int> ans(nums.size(),0);
        if(cnt==1){
            int prod=1;
            int ind=0;
            bool f=true;
            
            for(auto x:nums){
                if(x!=0){
                    prod*=x;
                }
                if(f and x!=0){
                    ind++;
                }else if(f and x==0){
                    f=false;
                }   
                
            }
            ans[ind]=prod;
            return ans;
        }else if(cnt>=2){
            return ans;
        }else{
            int prod=1;
            for(auto x:nums) prod*=x;
            int i=0;
            for(auto x:nums){
                ans[i++]=prod/x;
            }
            return ans;
        }
    }
};