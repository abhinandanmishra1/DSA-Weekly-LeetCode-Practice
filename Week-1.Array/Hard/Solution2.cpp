/*
    Problem Name - [381. Insert Delete GetRandom O(1) - Duplicates allowed]
    Read this blog - [Read the solution and discussion if needed]
*/
// My Solution
class RandomizedCollection {
public:
    unordered_map<int,vector<int>> mp;
    int index;
    vector<int> arr;
    RandomizedCollection() {
        mp.clear();
        index=0;
        arr.clear();
    }
    
    bool insert(int val) {
        if(mp[val].size()>0){
            mp[val].push_back(index);
            arr.push_back(val);
            index++;
            return false;
        }  
        mp[val].push_back(index);
        arr.push_back(val);
        index++;
        return true;
    }
    
    bool remove(int val) {
        if(mp[val].size()>0){
            
            int ind=mp[val].back();
            if(ind==(index-1)){
                arr.pop_back();
                index--;
                mp[val].pop_back();
            }else{
                mp[val].pop_back();
                swap(arr[ind],arr[index-1]);
                
                mp[arr[ind]].pop_back();
                mp[arr[ind]].push_back(ind);
                val=arr[ind];
                if(mp[val].size()==2){
                sort(mp[val].begin(),mp[val].end());
                
            }
            
            arr.pop_back();
            index--;
            }
            
            return true;
        }
        return false;
    }
    
    int getRandom() {
        int n=rand()%index;
        return arr[n];
    }
};

