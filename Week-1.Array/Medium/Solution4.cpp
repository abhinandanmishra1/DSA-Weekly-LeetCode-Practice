/*
    Problem Name - [380. Insert Delete GetRandom O(1)]
    Watch this video - [https://www.youtube.com/watch?v=TD2g8UjXMLA]
*/
// My Solution

class RandomizedSet {
public:
    unordered_map<int,int> mp; // This stores elemement with it's index value in the arr
    vector<int> arr; // maintaining an array so that we can access elements in O(1)
    int index=0;
    RandomizedSet() {
        mp.clear();
    }
    
    bool insert(int val) {
        if(mp.find(val)==mp.end()){
            arr.push_back(val);
            mp[val]=index;
            index++;
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        /*
          As we have to remove an element from the array 
          and order of array doesn't matter 
          So, if we have to remove any element we swap it with last element
          and then pop_back() that element.
          
          This makes operation in O(1)
        */
        
        if(mp.find(val)!=mp.end()){
            int size=arr.size();
            // swapped
            swap(arr[mp[val]],arr[size-1]);
            // popped last
            arr.pop_back();
            // decreased index by 1
            index--;
            // changed index of last element that was swapped
            mp[arr[mp[val]]]=mp[val];
            // Now remove the element from map also as it is no more in arr
            mp.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        // rand() gives random value with equal probability
        int i=rand()%arr.size();
        return arr[i];
    }
};

