/*
    Problem Name - [68. Text Justification]
    Read this blog - []
*/
// My Solution
class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<vector<string>> store;
        int i=0;
        while(i<words.size()){
            vector<string> st;
            int count=0;
            while(i<words.size() and count+words[i].size()<=maxWidth){
                st.push_back(words[i]);
                count+=words[i].size()+1;
                i++;
            }
            store.push_back(st);
            
        }
        vector<string> ans;
        for(int ii=0;ii<store.size();ii++){
            vector<string> arr=store[ii];
            string s="";
            int spaces=maxWidth;
            for(auto x:arr){
                spaces-=x.length();
            }
            int size=arr.size();
            if(ii==store.size()-1){
               
                for(int i=0;i<arr.size()-1;i++){
                    s+=arr[i];
                    s+=" ";
                    spaces--;
                }
                
                s+=arr.back(); 
                for(int i=0;i<spaces;i++){
                    s+=" ";
                }
                ans.push_back(s);
                continue;
            }
            
            
            // part - 2
            
            if(size==1){
                s=arr[0];
                for(int i=0;i<spaces;i++){
                    s+=" ";
                }
                ans.push_back(s);
            }else{
                /*
                    This is an example   -- 3 spaces 7 spaces
                    7/3 - 2 
                    7%3= 1
                    
                    5 spaces - 5/3 =1 
                    
                
                
                */
                
                size--;
                int save=spaces;
                cout<<spaces;
                 spaces=save/size;
                 
                 int k=save%size;
                for(int i=0;i<arr.size()-1;i++){
                    s+=arr[i];
                    
                    for(int j=0;j<spaces+(k>0?1:0);j++){
                          s+=" ";
                    } 
                    k--;
                }
                s+=arr.back();
                
                ans.push_back(s);
            }
        }
        return ans;
    }
};