class Solution {
public:
    bool static cmp(vector<int>&p1,vector<int>&p2)
    {
        return(p1[1]>p2[1]);
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        int m=0,c=0;
        for(int i=0;i<boxTypes.size();i++)
        {
             if(truckSize>=boxTypes[i][0])
             {
                 truckSize=truckSize-boxTypes[i][0];
             m=m+boxTypes[i][0]*boxTypes[i][1];
             }
             else if(truckSize<boxTypes[i][0] and truckSize!=0)
             {
                 m=m+truckSize*boxTypes[i][1];
                 truckSize=0;
             }
             
                
           
             if(truckSize==0)
             {
                break;
             }
        }
        
        return m;
    }
};