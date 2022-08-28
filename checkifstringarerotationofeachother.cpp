bool areRotations(string s1,string s2)
    {
        // Your code here
        
        if(s1.length()!=s2.length())
        {
            return 0;
        }
        return (s1+s1).find(s2) != string::npos;
        
        
        
    }