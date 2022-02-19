/*
    Problem Name - []
    Read this blog - []
*/
// My Solution
class Solution {
public:
    bool yes(vector<int> &count1,vector<int> &count2){
        for(int i=0;i<100;i++){
            if(count1[i]<count2[i]) return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        vector<int> count1(100,0);
        vector<int> count2(100,0);
        for(auto x:t){
            count2[x-'A']++;
        }
        int start=0,end=0;
        int n=s.length();
        int i=0,j=0;
        
        int len=INT_MAX;
        while(i<n){
            
            if(yes(count1,count2)){
                int dist=j-i;
                // cout<<s.substr(i,dist)<<" YES "<<endl;
                if(dist<len){
                    start=i;
                    end=j;
                    len=dist;
                }
                count1[s[i]-'A']--;
                i++;
            }else{ 
                if(j==n) break;
                count1[s[j]-'A']++;
                j++;
            }
            
            // cout<<s.substr(i,j-i)<<endl;
        }
        return len==INT_MAX?"":s.substr(start,end-start);
    }
};