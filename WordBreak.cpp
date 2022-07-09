struct Node{
    public:
    Node *link[26]={NULL};
    bool flag=0;
    
};
class Solution
{
public:
    void insert(Node *temp,string word)
    {
        Node *root=temp;
        for(int i=0;i<word.length();i++)
        {
            if(root->link[word[i]-'a']==NULL)
            {
                root->link[word[i]-'a']=new Node();
            }
            root=root->link[word[i]-'a'];
        }
        root->flag=1;
    }
    
    bool search(Node *temp,string word)
    {
        Node *root=temp;
        for(int i=0;i<word.length();i++)
        {
            if(root->link[word[i]-'a']==NULL)
            {
                return 0;
            }
            root=root->link[word[i]-'a'];
        }
        return root->flag;
        
    }
    
    bool wb(Node *temp,string s)
    {
        if(s.length()==0)
        {
            return 1;
        }
        for(int i=1;i<=s.length();i++)
        {
            //cout<<s.substr(0,i)<<" ";
            if(search(temp,s.substr(0,i)) and wb(temp,s.substr(i)))
            {
                return 1;
            }
        }
        return 0;
    }
    int wordBreak(string A, vector<string> &B) {
        
        Node *temp=new Node();
        for(int i=0;i<B.size();i++)
        {
            insert(temp,B[i]);
        }
        
        return wb(temp,A);
        
       
    }
};