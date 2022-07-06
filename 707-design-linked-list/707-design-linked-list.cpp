
  class Node {
    public: 
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        next = NULL;
    }
};

class MyLinkedList {
public:
  
    int size = 0;
    Node* head = NULL;
    Node* tail = NULL;
    MyLinkedList() {
        
    }
    
    int get(int index) {
        if(index>=size)
            return -1;
        Node *temp=head;
        for(int i=0;i<index;i++)
            temp=temp->next;
        
        return temp->val;
    }
    
    void addAtHead(int val) {
        
        Node *newnode=new Node(val);
        newnode->next=head;
        head=newnode;
        if(size==0)
            tail=newnode;
        
        size++;
    }
    
    void addAtTail(int val) {
        if(size==0){
            addAtHead(val);
            return;
        }
        
        Node *newnode=new Node(val);
        newnode->next=0;
        tail->next=newnode;
        tail=newnode;
        
        size++;
    }
    
    void addAtIndex(int index, int val) {
        
        if(index>size)
            return;
        else if(index==size)
            addAtTail(val);
        else if(index==0)
            addAtHead(val);
        else
        {
            Node *temp=head;
            Node *newnode=new Node(val);
            
            for(int i=0;i<index-1;i++)
                temp=temp->next;
            
            newnode->next=temp->next;
            temp->next=newnode;
            
            size++;
        }
    }
    
    void deleteAtIndex(int index) {
        
        if(index>=size)
            return;
        else if(index==size-1)
        {
            if(index==0){
                head=0;
                tail=0;
            }
            else
            {
                Node *temp=head;
                while(temp->next!=tail){
                    temp=temp->next;
                }
                tail=temp;
                temp->next=0;
            }
        }
        else if(index==0)
        {
            Node *temp=head;
            head=head->next;
            temp=0;
        }
        else
        {
            Node *temp=head;
            for(int i=0;i<index-1;i++)
            {
                temp=temp->next;
            }
            Node *t=temp->next;
            temp->next=temp->next->next;
            t->next=0;
        }
        size--;
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