/*
    Problem Name - [79. Word Search]
    Read this blog - []
*/


//This problem requires knowledge of DFS or BFS 
// You can study that or leave this problem and solve it when you learn BFS and DFS

// My Solution
class Solution {
public:
    
    int m,n;
    vector<int> arr={-1,0,1,0};
    vector<int> brr={0,1,0,-1};
    int dfs(vector<vector<char>>& board,int i,int j,string word,int k){
        if(k==word.length()) return 1;
        
        if(i<0 or j<0 or i>=m or j>=n or board[i][j]!=word[k]) return 0;
        char c=board[i][j];
        board[i][j]='*';
        for(int ii=0;ii<4;ii++){
            int x=i+arr[ii];
            int y=j+brr[ii];
           
                int ans=dfs(board,x,y,word,k+1);
                if(ans){
                    return 1;
                }
                
            }
        board[i][j]=c;
        return 0;
    }
    bool exist(vector<vector<char>>& board, string word) {
        m=board.size();
        n=board[0].size();
        vector<pair<int,int>> arr;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int ans=dfs(board,i,j,word,0);
            if(ans) return true;
            }
        }
        
       return false;
    }
};
