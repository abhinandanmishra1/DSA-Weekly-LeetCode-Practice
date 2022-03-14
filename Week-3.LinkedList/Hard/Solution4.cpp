/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> arr;
        ListNode* ans=NULL,*save=NULL;
        while(head!=NULL){
            arr.push_back(head->val);
            head=head->next;
        }
        int s=0;
        save=ans;
        bool flag=false;
        if(arr.size()>=k){
            flag=true;
        }
        if(flag){
            for(int i=0;i<arr.size();i++){
            if((i+1)%k==0){
                for(int j=i;j>=s;j--){
                    if(ans==NULL){
                        ans=new ListNode(arr[j]);
                        save=ans;
                    }else{
                        ans->next=new ListNode(arr[j]);
                        ans=ans->next;
                    }
                    
                }
                s=i+1;
            }
        }
            for(;s<arr.size();s++){
              
                         ans->next=new ListNode(arr[s]);
                         ans=ans->next;
                    
                     
         }
        }else{
            for(;s<arr.size();s++){
              if(ans==NULL){
                        ans=new ListNode(arr[s]);
                        save=ans;
                    }else{
                        ans->next=new ListNode(arr[s]);
                        ans=ans->next;
                    }
         }
        }
       
        
        return save;
    }
};