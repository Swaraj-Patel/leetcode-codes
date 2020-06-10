class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        //queue<pair<TreeNode*,int>>q;
        //q.first.push(root,root->val);
        int parent1=0,parent2=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            while(n--){
                auto t=q.front();
                q.pop();
                if(t->left!=NULL){
                    q.push(t->left);
                    if(t->left->val== x ){
                       // flag1=true;
                        
                         parent1=t->val;
                    }
                    if(t->left->val== y ){
                       // flag1=true;
                        
                         parent2=t->val;
                    }
                }    
                if(t->right!=NULL){
                    q.push(t->right);
                    if(t->right->val ==y ){
                       // flag2=true;
                        
                         parent2=t->val;
                        
                    }
                    if(t->right->val== x ){
                       // flag1=true;
                        
                         parent1=t->val;
                    }
                }
            }
            if((parent1!=0 and parent2==0) or(parent1==0 and parent2!=0))
                return false;
            if(parent1!=0 and parent2!=0 and parent1!=parent2)
                return true;
               
        }
        return false;
        }
};