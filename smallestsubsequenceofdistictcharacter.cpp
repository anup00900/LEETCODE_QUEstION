class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        if(s.length()==1)
        {
            return s;
        }
        stack<char>st;
        int a[26]={0};//whther element is already added to count for that
        unordered_map<char,int>umap;//count for element frequency
        for(int i=0;i<s.length();i++)
        {
            umap[s[i]]++;
        }
        st.push(s[0]);
        umap[s[0]]--;
        a[s[0]-'a']=1;
        for(int i=1;i<s.length();i++)
        {
            umap[s[i]]--;
            while((!st.empty())and(st.top()>s[i]) and (umap[st.top()]>0) and a[s[i]-'a']!=1)
            {
                a[st.top()-'a']=0;
                st.pop();
                
            }
            if((st.empty())or ((st.top()>s[i]) and (umap[st.top()]==0) and a[s[i]-'a']!=1))
            {
                st.push(s[i]);
                a[s[i]-'a']=1;
            }
            if((st.top()<s[i]) and a[s[i]-'a']==0)
            {
                st.push(s[i]);
                 a[s[i]-'a']=1;
            }
            
        }
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        
        return(ans);
        
        
        
        
        
    }
};