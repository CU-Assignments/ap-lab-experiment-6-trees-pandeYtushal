class Solution {
public:
    void findInorder(TreeNode* root, vector<int> &inorder) {
        if (!root) return ;

        findInorder(root->left, inorder);
        inorder.push_back(root->val);
        findInorder(root->right, inorder);
    }

    bool isValidBST(TreeNode* root) {
        vector<int> inorder;
        findInorder(root, inorder);

        for (int i = 1; i < inorder.size(); i++) {
            if (inorder[i - 1] >= inorder[i]) return false;
        }

        return true;
    }
};


INPUT: [2,1,3]
  OUTPUT: true
