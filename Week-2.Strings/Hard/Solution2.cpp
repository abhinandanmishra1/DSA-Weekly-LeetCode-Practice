/*
    Problem Name - [273. Integer to English Words]
    Read this blog - []
*/
// My Solution
class Solution {
public:
    string ones[20] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[10] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    
    string findans(int n){
    
        if(n >= 1000000000) return findans(n/1000000000) + " Billion" + findans(n % 1000000000);
        if(n >= 1000000) return findans(n/1000000) + " Million" + findans(n % 1000000);
        if(n >= 1000) return findans(n/1000) + " Thousand" + findans(n % 1000);
        if(n >= 100) return findans(n/100) + " Hundred" + findans(n % 100);
        if(n >= 20) return " " + tens[n / 10 - 2 ] + findans(n % 10) ;
        if(n >= 1) return " " + ones[n];
        return "";
    }
    
    string numberToWords(int n) {
        if(n == 0) return "Zero";
        return findans(n).substr(1);  
    }
};