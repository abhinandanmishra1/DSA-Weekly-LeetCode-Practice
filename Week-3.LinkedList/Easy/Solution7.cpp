/*
    Problem Name - [21. Merge Two Sorted Lists]
    Read this blog - []
*/
// My Solution

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(!list1) return list2;
        if(!list2) return list1;
         ListNode *result=new ListNode();
         ListNode *ans=result;
         while(list1!=NULL and list2!=NULL){
                int val1=list1->val;
                int val2=list2->val;
                // cout<<1<<" ";
                if(val1<val2){
                    result->next=new ListNode(val1);
                    list1=list1->next;
                }else{
                    result->next=new ListNode(val2);
                    list2=list2->next;
                }
                result=result->next;
         }
        while(list1!=NULL){
            result->next=new ListNode(list1->val);
            list1=list1->next;
            result=result->next;
        }
        while(list2!=NULL){
            result->next=new ListNode(list2->val);
            list2=list2->next;
            result=result->next;
        }
        return ans->next;
        
    }
};


//Recursive 

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(!list1) return list2;
        if(!list2) return list1;
        int val1=list1->val;
        int val2=list2->val;
        ListNode *result;
        if(val1<val2){
            result=new ListNode(val1);
            result->next=mergeTwoLists(list1->next,list2);
        }else{

            result=new ListNode(val2);
            result->next=mergeTwoLists(list1,list2->next);

        }
        return result;
        
    }
};