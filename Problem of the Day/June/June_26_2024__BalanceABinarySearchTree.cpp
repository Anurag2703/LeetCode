// Level: MEDIUM

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    public:
        vector<int> arr;
        inline void inOrder(TreeNode* root){
            vector<TreeNode*> stack;
            TreeNode* node=root;
            while (node || !stack.empty()){
                while(node){
                    stack.push_back(node);
                    node=node->left;
                }
                node=stack.back();
                stack.pop_back();
                
                arr.push_back(node->val);

                node=node->right;
            }
        }
        // slight revised to speed up
        TreeNode* balanceBST(const int l, const int r){
            if (l>r) return NULL;
            const int m=(l+r)/2;
            TreeNode* const left=balanceBST(l, m-1);
            TreeNode* const right=balanceBST(m+1, r);
            return new TreeNode(arr[m], left, right);
        }

        TreeNode* balanceBST(TreeNode* root) {
            inOrder(root);
            return balanceBST(0, arr.size()-1);
        }
};



auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();