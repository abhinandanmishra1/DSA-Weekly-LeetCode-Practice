/*
    Problem Name - [706. Design HashMap]
    Read this blog - []
*/
// My Solution
struct node{
    int key;
    int val;
    struct node * next;
    node(){ 
        key=-1;
        val=-1;
        next=NULL;
    }
    node(int k,int value){
        key=k;
        val=value;
        next=NULL;
    }
};
class MyHashMap {
public:
    node **store=new node*[256];
    MyHashMap() {
        for(int i=0;i<256;i++){
            store[i]=new node();
        }
    }
    
    void put(int key, int value) {
        int ind=key%256;
        node *temp=store[ind];
        while(temp->next!=NULL){
            cout<<(temp->key)<<endl;
            if(temp->next->key==key){
                temp->next->val=value;
                return;
            }
            temp=temp->next;
        }
        node *newNode=new node(key,value);
        temp->next=newNode;    
    }
    
    int get(int key) {
       int ind=key%256;
        node *temp=store[ind];
        while(temp->next!=NULL){
            if(temp->next->key==key){
                return temp->next->val;
            }
            temp=temp->next;
        }
        return -1;
    }
    
    void remove(int key) {
        int ind=key%256;
        node *temp=store[ind];
        while(temp->next!=NULL){
            if(temp->next->key==key){
                temp->next=temp->next->next;
                return;
            }
            temp=temp->next;
        }
    }
};

