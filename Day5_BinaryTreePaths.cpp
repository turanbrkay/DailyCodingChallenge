//
// Created by turan on 8/14/2024.
//

#if 0

#include <iostream>
#include <vector>
 struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode() : val(0), left(nullptr), right(nullptr) {}
         TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
         TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
     };


void searchLeafNode(TreeNode* root,std::vector<std::string>& leafPaths,std::string path) {

    if (!root) {
        return;
    }

    path.append(std::to_string(root->val));

    if (root->left != nullptr && root->right!= nullptr) {
        path.append("->");
        searchLeafNode(root->left,leafPaths,path);
        searchLeafNode(root->right,leafPaths,path);
    } else if (root->left == nullptr && root->right!= nullptr) {
        path.append(std::to_string(root->val)).append("->");
        searchLeafNode(root->right,leafPaths,path);
    }else if (root->left != nullptr && root->right== nullptr) {
        path.append(std::to_string(root->val)).append("->");
        searchLeafNode(root->left,leafPaths,path);
    } else {
        path.append(std::to_string(root->val));
        leafPaths.emplace_back(path);
    }


}

std::vector<std::string> binaryTreePaths(TreeNode* root) {
    std::vector<std::string>* leafPaths;
    searchLeafNode(root,*leafPaths,"");
    return *leafPaths;
}

#endif