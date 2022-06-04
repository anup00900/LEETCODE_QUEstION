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
    int ans=0;
    int getImportance(vector<Employee*> employees, int id) {
        
        
        for(auto it:employees)
        {
            if(it->id == id)
            {
                ans+=it->importance;
                for(auto i:it->subordinates)
                {
                    getImportance(employees,i);
                }
                break;
            }
        }
        return ans;
        
        
        
        
    }
};