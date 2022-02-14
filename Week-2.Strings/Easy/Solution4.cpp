/*
    Problem Name - [13. Roman to Integer]
    Read this blog - [See discussion if needed]
*/
// My Solution
class Solution {
public:
    int romanToInt(string s) {
          unordered_map<char, int> mp ={ { 'I' , 1 },{ 'V' , 5 },{ 'X' , 10 },{ 'L' , 50 },{ 'C' , 100 },{ 'D' , 500 },{ 'M' , 1000 } };
        
        int sum = mp[s.back()];
        int i=s.length()-2;
       while(i>=0){ 
           if (mp[s[i]] < mp[s[i + 1]]) sum-=mp[s[i]];  // because when end element is greater then we subtract all the smaller element just before it 
           // Like for IV -> sum=5-1
           else sum+=mp[s[i]]; // else add it to the answer
           i--;
       }
   
      return sum;
    }
};