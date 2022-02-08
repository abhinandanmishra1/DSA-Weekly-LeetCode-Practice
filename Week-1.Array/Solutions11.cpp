/*
    Problem Name - [118. Pascal's Triangle]
    Read this blog - [https://medium.com/nerd-for-tech/pascals-triangle-4acd190f6473]
*/
// My Solution
class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        // Handle case for n==1
        ans.push_back({1});
        if(n==1) return ans;

        // Handle case for n==2
        ans.push_back({1,1});
        if(n==2) return ans;

        // Now for n>2
        // ans array - {{1},{1,1}} -- Now I have implemented just basic code of adding
        // two continuous elements
        for(int i=3;i<=n;i++){
            vector<int> t;
            t.push_back(1); // First element in each row is 1
            for(int j=0;j<ans[i-2].size()-1;j++){
                // Pushing the sum of two continous elements sum in prev row
                t.push_back(ans[i-2][j]+ans[i-2][j+1]);
            }
            t.push_back(1); // Last element in each row is 1
            ans.push_back(t); // Pushing the ith row
        }
        return ans;
    }
};