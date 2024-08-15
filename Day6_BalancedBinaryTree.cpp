//
// Created by turan on 8/14/2024.
//


#if 0


#include <cmath>
#include <iostream>
#include <vector>
#include <queue>

#include "../../../../../Program Files/JetBrains/CLion 2024.1.4/bin/mingw/x86_64-w64-mingw32/include/stddef.h"

struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

constexpr int NULL_NODE = -1;

TreeNode* createTree(std::vector<int>& arrayTree) {
        if (arrayTree.empty() || arrayTree[0] == NULL_NODE) return nullptr;

        TreeNode* root = new TreeNode(arrayTree[0]);
        std::queue<TreeNode*> q;
        q.push(root);
        int i = 1;

        while (i < arrayTree.size()) {
                TreeNode* current = q.front();
                q.pop();

                if (i < arrayTree.size() && arrayTree[i] != NULL_NODE) {
                        current->left = new TreeNode(arrayTree[i]);
                        q.push(current->left);
                }
                i++;

                if (i < arrayTree.size() && arrayTree[i] != NULL_NODE) {
                        current->right = new TreeNode(arrayTree[i]);
                        q.push(current->right);
                }
                i++;
        }

        return root;
}


int checkDeep(TreeNode* root,int difference, int leftDepth, int rightDepth) {

        if (root==nullptr) {
                return (difference);
        }


        int left = checkDeep(root->left,difference,leftDepth,rightDepth);
        int right = checkDeep(root->right,difference,leftDepth,rightDepth);


        if (std::abs(leftDepth-rightDepth) <= 1) {
                return std::max(leftDepth,rightDepth)+1;
        }else {
                return false;
        }
}

bool isBalanced(TreeNode* root) {

        if (!root) {
                return true;
        }

        if (checkDeep(root,0)!=0) {
                return true;
        }

        return false;



}

int main() {
        std::vector<int> tree = {1,2,2,3,NULL_NODE,NULL_NODE,3,4,NULL_NODE,NULL_NODE,4};
        TreeNode* binaryTree = createTree(tree);
        bool isBalance = isBalanced(binaryTree);
        std::cin.get();


}

#endif
