class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        
        string str1="";
        string str2="";
        
        
        for(int i=0;i<n;i++)
        {
            if(str[i]>=65 and str[i]<=90)
            {
                str1+=str[i];
            }
            else 
            {
                str2+=str[i];
            }
        }
        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());
        int s1=0;
        int s2=0;
        
        for(int i=0;i<n;i++)
        {
            if(str[i] >=65 and str[i]<=90)
            {
                str[i]=str1[s1++];
            }
            else 
            {
                str[i]=str2[s2++];
            }
            
        }
        return str;
        
        
        
    }
};