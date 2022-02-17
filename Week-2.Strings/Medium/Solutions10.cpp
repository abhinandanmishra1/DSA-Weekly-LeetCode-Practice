/*
    Problem Name - [6. Zigzag Conversion]
    Read this blog - []
*/
// My Solution
/*
Create a vector of string of size numRows
We have to traverse the string firstly in rows and keep pushing the characters of string in the respective rows and increase the row by 1.
When you reach last row then after that decrease row by 1 and keep pushing characters and decrease row by 1 untill row==0.

This process continues untill we traverse whole string.

Question is bit confusing it should give explanation of traversing or something else.
*/
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<string> store(numRows,"");
        int i=0;
        int row=-1;
        bool flag=true;
        while(i<s.length()){
            
            if(flag){
                row++;
                if(row==numRows-1){
                    flag=false;
                }
            }else{
                row--;
                if(row==0){
                    flag=true;
                }
            }
            store[row].push_back(s[i]);
            i++;
        }
        string ans="";
        for(auto x:store){
            // cout<<x<<endl;
            ans+=x;
        }
        return ans;
    }
};