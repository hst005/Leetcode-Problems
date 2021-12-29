/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/
class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL || (root->left==NULL)){
            return root;
        }
        queue<Node *> q;
        vector <Node*> seq;
        q.push(root);
        Node *tempnode=new Node(-1111);
        q.push(tempnode);
        while(!q.empty()){
            Node *curr=q.front();
            q.pop();
            seq.push_back(curr);
            if(curr->val==-1111){
                if(q.empty()){
                    break;
                }
                else
                q.push(curr);
            }
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
        
      /*  for(int i=0;i<seq.size();i++){
            cout<<seq[i]->val<< " "<<endl;
            if(seq[i]->val==-1111){
                continue;
            }
            else{
                seq[i]->next=seq[i+1];
            }
        }*/
        int n=seq.size();
        Node *rightnode=seq[n-1];
        bool is=false;
        // for(int i=n-2;i>=0;i--){
        //     if(seq[i]->val==-1111){
        //         is=true;
        //         continue;
        //     }
        //     if(is==true){
        //         seq[i]->next=NULL;
        //         is=false;
        //     }
        //    else{ seq[i]->next=rightnode;
        //     rightnode=seq[i];}
        // }
        for(int i=n-1;i>=0;i--){
            if(seq[i]->val==-1111){
                rightnode=seq[i];
                continue;
            }
            if(rightnode->val==-1111){
                
                seq[i]->next=NULL;
            }
            else{
                seq[i]->next=rightnode;
            }
            rightnode=seq[i];
        }
        return seq[0];
    }
};
