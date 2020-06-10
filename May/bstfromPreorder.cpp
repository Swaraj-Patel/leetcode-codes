class Solution {
public:
    // using extra space 
//     TreeNode* bstFromPreorder(vector<int>& preorder) {
//     if(preorder.size()==0)
//         return NULL;
//        TreeNode* root=new TreeNode (preorder[0]); 
//     if(preorder.size()==1)
//         return root;
        
//         vector<int>left;
//         vector<int>right;
//        for(auto i:preorder){
//            if(i<preorder[0])
//                left.push_back(i);
//            else if(i>preorder[0])
//                right.push_back(i);
           
//        }
//         root->left=bstFromPreorder(left);
//         root->right=bstFromPreorder(right);
        
//         return root;
//     }
// };
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return buildTree(preorder,0,preorder.size()-1);
        
        
    }
    
    TreeNode* buildTree(vector<int>& preorder,int l,int r){
        if(l>r)
            return NULL;
        TreeNode* root=new TreeNode(preorder[l]);
        if(l==r)
            return root;
        int index=l+1;
        while(index<=r and preorder[index]<preorder[l])
            index++;
        root->left=buildTree(preorder,l+1,index-1);
        root->right=buildTree(preorder,index,r);
        
        return root;
    }
    
};