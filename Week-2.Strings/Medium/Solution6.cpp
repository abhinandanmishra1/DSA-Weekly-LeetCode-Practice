/*
    Problem Name - [227. Basic Calculator II]
    Read this blog - []
*/
// My Solution
class Solution {
public:
    int calculate(string s) {
        int i=0;
        int ans=0;
        int n=s.length();
        vector<int> numbers;
        vector<char> operations;
        while(i<n){
            int num=0;
            while(i<n and s[i]==' '){
                i++;
            }
            while(i<n and s[i]>='0' and s[i]<='9'){
                num=num*10+(s[i]-'0');
                i++;
            }
            while(i<n and s[i]==' '){
                i++;
            }
            // Handling the case of multiplication and division separately
            // I'm storing the numbers in an array 
            // But when the previous operation was "*" or "/" then I pop out last element and operation
            // And push back product or division value in numbers array 
            // and next operation is pushed back in the operations
            if(operations.size()>0 and operations[operations.size()-1]=='*'){
                int last=numbers.back();
                numbers.pop_back();
                numbers.push_back(last*num);
                operations.pop_back();
                if(i<n)
                operations.push_back(s[i]);
                i++;
            }else if(operations.size()>0 and operations[operations.size()-1]=='/'){
                int last=numbers.back();
                numbers.pop_back();
                numbers.push_back(last/num);
                operations.pop_back();
                if(i<n)
                operations.push_back(s[i]);
                i++;
            }else{
                numbers.push_back(num);
                if(i<n)
                operations.push_back(s[i]);
                i++;
            }
            
        }
        ans=numbers[0];
       
        for(i=1;i<numbers.size();i++){
            if(operations[i-1]=='-'){
                ans-=numbers[i];
            }else{
                ans+=numbers[i];
            }
        }
        return ans;
    }
};