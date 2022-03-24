class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        
        sort(people.begin(),people.end());
        
        int i=0;
        int j=people.size()-1;
        int c=0;
        if(people.size()<=1)
        {
            return 1;
        }
        while(j>=i)
        {
            if(i==j)
            {
                c=c+1;
                break;
            }
            if(people[i]+people[j]<=limit)
            {
                c=c+1;
                i=i+1;
                j=j-1;
            }
            else 
            {
                c=c+1;
                j=j-1;
            }
            
        }
       
        return c;
    }
};