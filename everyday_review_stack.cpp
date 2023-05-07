//KMP



// inorderTraversal






//inorder

#include <vector>
#include <stack>
using namespace std;

//Definition for a binary tree node.
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {

public:

    vector<int> preorder(TreeNode *root){

        stack<TreeNode*> st;
        vector<int> res;
        if(root == nullptr) return res;
        st.push(root);

        while(!st.empty()){

            TreeNode *node = st.top();
            st.pop();
            res.push_back(node->val);

            if(node->left) st.push(root->left);
            if(node->right) st.push(root->right);

        }

        return res;

    }

};