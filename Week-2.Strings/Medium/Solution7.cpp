/*
    Problem Name - [12. Integer to Roman]
    Read this blog - []
*/
// My Solution
class Solution {
public:
    string intToRoman(int num) {
        string ans="";
        vector<pair<int,string>> st={
            {1000,"M"},
            {900,"CM"},
            {500,"D"},
            {400,"CD"},
            {100,"C"},
            {90,"XC"},
            {50,"L"},
            {40,"XL"},
            {10,"X"},
            {9,"IX"},
            {5,"V"},
            {4,"IV"},
            {1,"I"}
        };
        for(auto &p:st){
            while(num>=p.first){
                num-=p.first;
                ans+=p.second;
            }
        }
        return ans;
    }
};