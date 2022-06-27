class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        
        priority_queue<int>pq;
        //pq.push(bricks);
        int i;
        for(i=0;i<heights.size()-1;i++)
        {
           
            int d = heights[i+1]-heights[i];
            if(d<=0)
            {
                continue;
            }
           
            bricks=bricks-d;
            pq.push(d);
            if(bricks<0)
            {
                bricks+=pq.top();
                pq.pop();
                ladders--;
            }
            if(ladders<0)
            {
                break;
            }
            
       
            
        }
        return i;
        
        
        
        
    }
};