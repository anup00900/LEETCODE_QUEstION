struct Node{
    public:
    Node *link[26]={NULL};
    bool flag=0;
};


class WordDictionary {
public:
    Node *root=new Node();
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        
        //word = word.casefold();
        Node *temp = root;
        for(int i=0;i<word.size();i++)
        {
            
            if(temp->link[word[i]-'a']==NULL)
            {
                temp->link[word[i]-'a']=new Node();
                
            }
            temp=temp->link[word[i]-'a'];
            
            
        }
        temp->flag=1;
        
    }
    bool find(Node *t,string word,int pos)
    {
        if(word.size()==pos)
        {
            return t->flag;
        }
        //Node *t=temp;
        if(word[pos]=='.')
        {
            for(int i=0;i<26;i++)
            {
                if(t->link[i]!=NULL and find(t->link[i],word,pos+1))
                {
                    
                        return 1;
                    
                }
            }
        }
        else
        {
            if(t->link[word[pos]-'a']!=NULL and find(t->link[word[pos]-'a'],word,pos+1))
            {
                
                    return 1;
                
            }
        }
        return 0;
    }
    bool search(string word) {
        
        return find(root,word,0);
        
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */