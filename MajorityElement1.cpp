int u=nums[0];
            int m=1;
            
            for(int i=1;i<nums.size();i++)
            {
                if(m==0)
                {
                    u=nums[i];
                }
                if(u==nums[i])
                {
                    m++;
                }
                else
                {
                    m--;
                }
                
            }
           