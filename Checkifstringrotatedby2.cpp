bool isRotated(string str1, string str2)
    {
        // Your code here
        string s1=str1;
        reverse(str1.begin(),str1.end());
        reverse(str1.begin(),str1.begin()+2);
        reverse(str1.begin()+2,str1.end());
        
        if(str1 == str2)
        {
            return 1;
        }
        int n=s1.length();
        reverse(s1.begin(),s1.end());
        reverse(s1.begin(),s1.begin()+(n-2));
        reverse(s1.begin()+(n-2),s1.end());
        
        
        if(s1 == str2)
        {
            return 1;
        }
        return 0;
        
        
        
    }
