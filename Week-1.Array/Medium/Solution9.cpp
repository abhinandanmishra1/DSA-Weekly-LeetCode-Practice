/*
    Problem Name - [48. Rotate Image]
    Read this blog - []
*/
// My Solution
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // transpose of a matrix means 
        // arr[i][j] becomes arr[j][i]
        // Here first it is becoming tanspose
        // then all the rows of transpose are reversed 
        /*
         Like for matrix  | Transpose is  | Answer is
            1 2           | 1 3           | 3 1
            3 4           | 2 4           | 4 2
        */
        //change matrix -> Transpose -> Reverse each row
        for(int i=0;i<matrix.size();i++){
            for(int j=i;j<matrix.size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        // Now reverse each row
        for(int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};