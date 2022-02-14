/*
    Problem Name - [28. Implement strStr()]
    Read this blog - []
*/
// My Solution
class Solution {
public:
    int strStr(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        if(m>n) return -1;
        if(s1==s2) return 0;
        int i=0;
        while(i<=n-m){
            int j=0;
            int k=i;
            while(j<m and s1[k]==s2[j]){
                k++;
                j++;
            }
            if(j==m) return i;
            i++;
        }
        return -1;
    }
};