class Solution {
    vector<int> v;
public:
    int kthSmallest(TreeNode* root, int k) {
        inorder(root);
        return v[k-1];
    }
    void inorder(TreeNode* root){
        if(root==NULL)
            return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
};