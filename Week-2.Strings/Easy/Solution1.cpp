/*
    Problem Name - [415. Add Strings]
    Read this blog - []
*/
// My Solution
class Solution {
public:
    string addStrings(string num1, string num2) {
        int c=0;
        int n1=num1.length()-1;
        int n2=num2.length()-1;
        int carry=0;
        string s="";
        while(n1>=0 and n2>=0){
            int add=(num1[n1]-'0')+(num2[n2]-'0')+carry;
            carry=add/10;
            add=add%10;
            s+=char(add+'0');
            n1--,n2--;
        }
        while(n1>=0){
            int add=(num1[n1]-'0')+carry;
            carry=add/10;
            add=add%10;
            s+=char(add+'0');
            n1--;
        }
        while(n2>=0){
            int add=(num2[n2]-'0')+carry;
            carry=add/10;
            add=add%10;
            s+=char(add+'0');
            n2--;
        }
        if(carry>0){
            s+=char(carry+'0');
        }
        reverse(s.begin(),s.end());
        return s;
    }
};