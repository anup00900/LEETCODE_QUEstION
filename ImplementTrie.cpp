struct Node {
    Node *links[26];
    bool flag=0;
    //checking if reference trie is present or not or char is present or not
    bool contains(char ch)
    {
        return links[ch-'a']!=NULL;
    }
    void put(char ch,Node *node)
    {
        links[ch-'a']=node;
    }
};
class Trie {
   
public:
    Node *root;
    Trie() {
        
        //Initializing Trie data structure 
        root = new Node();
        
    }
    
    void insert(string word) {
        
        //Dummy Node Pointing to root Node
        Node *temp = root;
        for(int i=0;i<word.length();i++)
        {
            if(!temp->contains(word[i]))
            {
                //Doesn't exist create new trie.
                temp->put(word[i],new Node());
            }
            temp = temp->links[word[i]-'a'];
            
        }
        temp->flag=1;
          
    }
    
    bool search(string word) {
        
        Node *temp=root;
        for(int i=0;i<word.length();i++)
        {
            if(!temp->contains(word[i]))
            {
                //Doesn't exist create new trie.
                return 0;
            }
            temp = temp->links[word[i]-'a'];
            
        }
        return temp->flag;
        
        
    }
    
    bool startsWith(string word) {
        
        Node *temp=root;
        for(int i=0;i<word.length();i++)
        {
            if(!temp->contains(word[i]))
            {
                //Doesn't exist create new trie.
                return 0;
            }
            temp = temp->links[word[i]-'a'];
            
        }
        return 1;
        
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */