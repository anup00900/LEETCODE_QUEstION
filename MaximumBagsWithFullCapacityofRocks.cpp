class Solution {
public:
    bool static cmp(vector<int>&p1,vector<int>&p2)
    {
        int d1 = p1[1]-p1[0];
        int d2 = p2[1]-p2[0];
        return d1<d2;
    }
    int maximumBags(vector<int>& cap, vector<int>& r, int ad) {
     
        int n=cap.size();
        
        vector<vector<int>>v;
        
        for(int i=0;i<n;i++)
        {
            v.push_back({r[i],cap[i]});
        }
        
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[0].size();j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(v[i][0]!=v[i][1])
            {
                int t=v[i][1]-v[i][0];
                
                if(t<=ad)
                {
                    c++;
                    ad=ad-t;
                }
                else
                {
                    break;
                }
                
            }
            else if(v[i][0]==v[i][1])
            {
                c++;
            }
        }
        return c;
    
    }
};