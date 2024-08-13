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

    TreeNode* flaged = root;

    while (flaged) {
        if ((flaged->val < p->val && flaged->val > q->val) || (flaged->val > p->val && flaged->val < q->val)) {
            return flaged;
        }else if (flaged->val < p->val && flaged->val < q->val) {
            flaged = flaged->right;
        }else if (flaged->val > p->val && flaged->val > q->val) {
            flaged = flaged->left;
        }else if (flaged->val == p->val || flaged->val == q->val) {
            return flaged;
        }
    }

    return flaged;
}
int main() {


}


#endif