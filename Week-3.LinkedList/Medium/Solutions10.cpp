/*
    Problem Name - [117. Populating Next Right Pointers in Each Node II]
    Read this blog - []
*/
// My Solution

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return root;
      queue<vector<Node *>> q;
      q.push({root});
      while(!q.empty()){
          auto arr=q.front();
          vector<Node *> v;
          q.pop();
          int i=0;
          // cout<<arr.size()<<endl;
          for( i=0;i<arr.size()-1;i++){
              arr[i]->next=arr[i+1];
              
              if(arr[i]->left!=NULL) v.push_back(arr[i]->left);
              if(arr[i]->right!=NULL) v.push_back(arr[i]->right);
          }
          arr[i]->next=NULL;
          if(arr[i]->left!=NULL) v.push_back(arr[i]->left);
          if(arr[i]->right!=NULL) v.push_back(arr[i]->right);
          if(v.size()>0)
          q.push(v);
          // cout<<v.size()<<endl;
          
      }  
        return root;
    }
};