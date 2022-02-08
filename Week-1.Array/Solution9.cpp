/*
    Problem Name - [509. Fibonacci Number]
    Read this blog - []
*/
// My Solution

// This question can be done in multiple ways 
// But just follow approach 1 and 2 for Now

// Approach - 1 
// O(n) Time Complexity O(n) Space Complexity

class Solution {
public:
    int dp[50];
    int fib(int n) {
        if(n==0 or n==1) return n;
        if(dp[n]!=0) return dp[n];
        return dp[n]=fib(n-1)+fib(n-2);
    }
};

// Approach - 2
// O(n) Time Complexity O(1) Space Complexity
class Solution {
public:
    int fib(int n) {
        int a=0,b=1;
        while(n--){
            int c=a+b;
            a=b;
            b=c;
        }
        return a;
    }
};

// We can do both the approaches recursively also
// Third optimized approach is matrix exponentiation

// First learn matrix exponentiation then solve it in O(logn)

// Approach - 3 (Matrix Exponentiation) (Not for beginners)
class Solution {
public:
    void multiply(vector<vector<int>>& arr1,vector<vector<int>> arr2){
        int n=arr1.size();
        vector<vector<int>> prod(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                prod[i][j]=0;
                for(int k=0;k<n;k++){
                    prod[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }
        arr1=prod;
    }
    void power(vector<vector<int>>& arr,int n){
        vector<vector<int>> identity(2,vector<int>(2,0));
        for(int i=0;i<2;i++) identity[i][i]=1;
        while(n){
            if(n&1){
                multiply(identity,arr);
                n--;
            }
            multiply(arr,arr);
            n/=2;
        }
        arr=identity;
    }
    
    int fib(int n) {
        vector<vector<int>> arr(2,vector<int>(2,1));
        arr[0][0]=0;
        power(arr,n);
        return arr[1][0];
    }
};