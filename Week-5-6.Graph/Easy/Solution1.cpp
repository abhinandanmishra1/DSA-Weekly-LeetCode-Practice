/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    vector<int> index;
    vector<bool> visited;
    int getAns(vector<Employee *> employee,int id){
        if(visited[id]) return 0;
        int ans=0;
        visited[id]=true;
        auto emp=employee[index[id]];
        ans+=emp->importance;
        for(auto i:emp->subordinates){
            ans+=getAns(employee,i);
        }
        return ans;
    }
    int getImportance(vector<Employee*> employees, int id) {
        index.resize(2001);
        int i=0;
        visited.resize(2001,false);
        for(auto x:employees){
            index[x->id]=i++;
        }
        int ans=getAns(employees,id);
        return ans;
    }
};