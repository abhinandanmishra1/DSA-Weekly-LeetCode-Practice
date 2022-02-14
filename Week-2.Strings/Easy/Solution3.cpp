/*
    Problem Name - [680. Valid Palindrome II]
    Read this blog - []
*/
// My Solution
class Solution {
public:
    bool palindrome(string &s){
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i++]!=s[j--]) return false;
            
        }
        return true;
    }
    bool validPalindrome(string s) {
        if(palindrome(s)) return true;
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j]) break;
            i++;
            j--;
        }
        string left=s.substr(0,i);
        string right=s.substr(i+1);
        string ans=left+right;
        if(palindrome(ans)) return true;
        left=s.substr(0,j);
       right=s.substr(j+1);
       ans=left+right;
        if(palindrome(ans)) return true;
        return false;
    }
};