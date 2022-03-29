 
   int maximum69Number (int num) {
        
        vector<int>v;
        while(num)
        {
            int r=num%10;
            v.push_back(r);
            num=num/10;
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==6)
            {
                v[i]=9;
                break;
            }
        }
        int sum=0;
         for(int i=0;i<v.size();i++)
        {
           sum=sum*10+v[i];
        }
        return sum;
    }