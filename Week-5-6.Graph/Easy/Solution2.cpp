class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> vis(n+1,-1);
        vector<int> count(n+1,0);
        for(auto x:trust){
            vis[x[0]]=x[1];
            count[x[1]]++;
        }
        for(int i=1;i<n+1;i++){
            if(vis[i]==-1 and count[i]==n-1){
                return i;
            }
        }
        return -1;
    }
};