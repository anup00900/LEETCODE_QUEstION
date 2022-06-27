struct Node{
    
    Node *links[26]={NULL};
    bool flag = 0;
    int cp=0;
    int ew=0;
    
};

class Trie{

    public:
    Node *root;
    Trie(){
        // Write your code here.
        root = new Node();
    }

    void insert(string &word){
        // Write your code here.
        Node *temp = root;
        for(int i=0;i<word.length();i++)
        {
            if(temp->links[word[i]-'a']==NULL)
            {
                temp->links[word[i]-'a']=new Node();
            }
            temp=temp->links[word[i]-'a'];
            temp->cp=temp->cp+1;
        }
        temp->flag=1;
        temp->ew=temp->ew+1;
    }

    int countWordsEqualTo(string &word){
        Node *temp = root;
        for(int i=0;i<word.length();i++)
        {
            if(temp->links[word[i]-'a']==NULL)
            {
                return 0;
            }
            temp=temp->links[word[i]-'a'];
            
        }
        return temp->ew;
    }
    int countWordsStartingWith(string &word){
        Node *temp = root;
        for(int i=0;i<word.length();i++)
        {
            if(temp->links[word[i]-'a']==NULL)
            {
                return 0;
            }
            temp=temp->links[word[i]-'a'];
            
        }
        return temp->cp;
    }

    void erase(string &word){
        // Write your code here.
        Node *temp = root;
        for(int i=0;i<word.length();i++)
        {
            if(temp->links[word[i]-'a']==NULL)
            {
                return;
            }
            temp=temp->links[word[i]-'a'];
            temp->cp=temp->cp-1;
        }
       
        temp->ew=temp->ew-1;
    }
};

