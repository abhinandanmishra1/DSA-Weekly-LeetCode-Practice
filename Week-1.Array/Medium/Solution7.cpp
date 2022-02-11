/*
    Problem Name - [54. Spiral Matrix]
    Read this blog - [NA]
    This is a simple traversing question
*/
// My Solution
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        
        int left = 0, right = arr[0].size(), top = 0, bottom = arr.size(), i = 0, total = right-- * bottom--;
        vector<int> res(total);
        while (true) {
            // right
            for (int x = left, y = top++; x <= right; x++) res[i++] = arr[y][x];
            if (i == total) break;
            // down
            for (int y = top, x = right--; y <= bottom; y++) res[i++] = arr[y][x];
            if (i == total) break;
            // left
            for (int x = right, y = bottom--; x >= left; x--) res[i++] = arr[y][x];
            if (i == total) break;
            // up
            for (int y = bottom, x = left++; y >= top; y--) res[i++] = arr[y][x];
            if (i == total) break;
        }
        return res;
    }
};