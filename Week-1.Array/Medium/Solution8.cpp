/*
    Problem Name - [11. Container With Most Water]
    Read this blog - [Search solution video on Youtube if you want]
*/
// My Solution
// Greedy Approach
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int i=0,j=height.size()-1;
        while(i<j){
            int len=j-i;
            int area=len*min(height[i],height[j]);
            ans=max(ans,area);
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        }
        return ans;
    }
};