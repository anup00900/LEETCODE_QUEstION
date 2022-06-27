class Node{
    public:
    Node *links[26]={NULL};
    bool flag=0;
};

Node *root=new Node();

void insert(string &word)
{
    Node *temp = root;
    for(int i=0;i<word.length();i++)
    {
        if(temp->links[word[i]-'a']==NULL)
        {
            temp->links[word[i]-'a']=new Node();
        }
        temp=temp->links[word[i]-'a'];
    }
    temp->flag=1;
}

bool find(string &word)
{
    Node *temp=root;
    for(int i=0;i<word.length();i++)
    {
        if(!temp->links[word[i]-'a'] or !temp->links[word[i]-'a']->flag)return 0;
        
            temp=temp->links[word[i]-'a'];
           
    }
    return temp->flag;
}




string completeString(int n, vector<string> &a){
    
    for(int i=0;i<a.size();i++)
    {
        insert(a[i]);
    }
    string ans="";
    for(int i=0;i<a.size();i++)
    {
        if(find(a[i]))
        {
            if(a[i].length()>ans.length())
            {
                ans=a[i];
            }
            else if(a[i].length()==ans.length())
            {
                if(a[i]<ans)
                {
                    ans=a[i];
                }
            }
        }
    }
    if(ans=="")
    {
        return "None";
    }
    return ans;
}
