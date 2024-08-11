//
// Created by turan on 8/11/2024.
//

#if 0

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };



TreeNode* invertTree(TreeNode* root) {

    if (root == nullptr)
        return nullptr;

    TreeNode* left = root->left;
    TreeNode* right = root->right;

    root->right = left;
    root->left = right;

    invertTree(root->left);
    invertTree(root->right);


    return root;

}


#endif