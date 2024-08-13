//
// Created by turan on 8/14/2024.
//


#if 0
#include <vector>
#include <iostream>

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

    if (root == nullptr || root->val == p->val || root->val == q->val) {
        return root;
    }

    TreeNode* leftRoot = lowestCommonAncestor(root->left,p,q);
    TreeNode* rightRoot = lowestCommonAncestor(root->right,p,q);

    if (leftRoot!=nullptr && rightRoot!=nullptr ) {
        return root;
    }else if (leftRoot==nullptr && rightRoot==nullptr){
        return nullptr;
    }

    return (leftRoot!=nullptr ? leftRoot : rightRoot);


}


int main() {


}


#endif