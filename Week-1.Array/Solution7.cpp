/*
    Problem Name - [724. Find Pivot Index]
    Read this blog - [NA]
*/
// My Solution
// This is first approach  - O(n) time complexity O(n) Space Complexity
class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int n=arr.size();
        vector<int> pre(n+1,0),post(n+1,0);
        for(int i=1;i<n+1;i++){
            pre[i]=pre[i-1]+arr[i-1];
        }
        for(int i=n-1;i>=0;i--){
            post[i]=post[i+1]+arr[i];
        }
        // for each i prefix and suffix sum array is maintained
        // Now only check where it becomes equal and return index
        if(post[1]==0) return 0;
        for(int i=1;i<n-1;i++){
            if(pre[i]==post[i+1]) return i;
        }
        if(pre[n-1]==0) return n-1;
        return -1;
    }
};

// Second approach is without using prefix and suffix array
class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(auto x:arr){
            sum+=x;
        }
        // Here sum is total sum of all elements of arr
        /*
            
            Approach 
            Let arr=[1,7,3,6,5,6]
            
            for i=0:
            left=0 right=27
            At i=0 left becomes left+arr[i] that is 1

            for i=1:
            left=1 right=20
            At i=1 left becomes left+arr[i] that is 8

            for i=2:
            left=8 right=17
            At i=2 left becomes left+arr[i] that is 11

            for i=3:
            left=11 right=11
            And here left == right hence 3 will be returned as an answer

        */
        int left=0;
        for(int i=0;i<n;i++){
            int right = sum -left-arr[i];  // where sum is total sum 
            if(left==right) return i;
            left+=arr[i];  // left is increased each time
        }
        return -1;
    }
};