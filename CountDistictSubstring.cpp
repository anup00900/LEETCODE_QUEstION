class Node{
    
    public:
    Node *links[26]={NULL};
    bool flag=0;
    
    
    
};


void insert(int &c,Node *root,string s,int t)
{
    Node *temp=root;
    for(int i=t;i<s.length();i++)
    {
        if(temp->links[s[i]-'a']==NULL)
        {
            temp->links[s[i]-'a']=new Node();
            c=c+1;
        }
        temp=temp->links[s[i]-'a'];
    }
    temp->flag=1;
}


int countDistinctSubstring(string s)
{
   Node *root=new Node();
   int c=0;
   for(int i=0;i<s.length();i++)
   {
       insert(c,root,s,i);
   }
   
   return c+1;
}
