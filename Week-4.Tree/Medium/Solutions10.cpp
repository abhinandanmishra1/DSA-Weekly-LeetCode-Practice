class Solution {
public:
    /*
       for any i as root  
       number of binary search trees 
       numTrees(i-1) * numTrees(n-i) 
    */
    int dp[20];
    int numTrees(int n) {
         if(n==0 or n==1) return 1;
        if(dp[n]!=0) return dp[n];
         int ans=0;
        for(int i=1;i<=n;i++){
            ans+=numTrees(i-1)*numTrees(n-i);
            
        }
        return dp[n]=ans;
    }
};