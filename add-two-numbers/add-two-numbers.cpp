class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode ans(0);
        ListNode* travans=&ans;
        
        int carry=0;
        while(l1 || l2 || carry){
           if(l1){
               carry+=l1->val;
               l1=l1->next;
           } 
            if(l2){
               carry+=l2->val;
               l2=l2->next;
           } 
            ListNode *temp=new ListNode(carry%10);
            carry/=10;
           
            
                travans->next=temp;
                travans=temp;
            
            
        }
        return ans.next;
    }
  /*  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode preHead(0), *p = &preHead;
    int extra = 0;
    while (l1 || l2 || extra) {
        int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + extra;
        extra = sum / 10;
        p->next = new ListNode(sum % 10);
        p = p->next;
        l1 = l1 ? l1->next : l1;
        l2 = l2 ? l2->next : l2;
    }
    return preHead.next;
}*/
    /*ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=new ListNode();
        ListNode* temp2=new ListNode();
        
        temp1=l1;
        temp2=l2;
        int c1=0,c2=0;
        
        while(temp1!=NULL){
            c1++;
            temp1=temp1->next;
        }
        
        while(temp2!=NULL){
            c1++;
            temp2=temp2->next;
        }
       // ListNode* trav1=new ListNode();
       // ListNode* trav2=new ListNode();
        ListNode* ans=new ListNode();
        ListNode* travans=ans;
       // trav1=l1;
       // trav2=l2;
        int i=0;
        
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry){
           if(l1){
               carry+=l1->val;
               l1=l1->next;
           } 
            if(l2){
               carry+=l2->val;
               l2=l2->next;
           } 
            ListNode *temp=new ListNode(carry);
            if(i==0){
                ans=temp;
                i++;
                travans=ans;
            }
            else{
                travans->next=temp;
                travans=temp;
            }
            
        }
        return ans;
    }*/
};