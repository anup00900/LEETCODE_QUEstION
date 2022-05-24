class Node{
    public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};


class MyLinkedList {
public:
    Node *temp = new Node(-1);
    int size = 0;
    MyLinkedList() {
        
    }
    
    int get(int index) {
        
        if(index>=size)
        {
            return -1;
        }
        Node* t = temp->next;
        for(int i=0;i<index;i++)
        {
            t=t->next;
        }
       
        return t->val;
    }
    
    void addAtHead(int val) {
        
        Node *node = new Node(val);
        node->next = temp->next;
        temp->next = node;
         size++;
   
    }
    
    void addAtTail(int val) {
        
        Node *node = new Node(val);
        Node *t=temp;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=node;
         size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index>size)
        {
            return;
        }
        Node* t = temp;
        for(int i=0;i<index;i++)
        {
            t=t->next;
        }
        Node *node = new Node(val);
        node->next=t->next;
        t->next=node;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index>=size)
        {
            return;
        }
        Node* t = temp;
        for(int i=0;i<index;i++)
        {
            t=t->next;
        }
        Node *g = t->next;
        t->next = t->next->next;
        g->next=NULL;
        size--;
        delete g;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */