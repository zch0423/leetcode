/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层次遍历 II
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) { 
        // 递归版本
        vector<vector<int>> ans;
        if(root==nullptr){
            return ans;
        }else{
            bfs(ans, root, 0);
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
    void bfs(vector<vector<int>>& ans, TreeNode* node, int level){
        if(node==nullptr){
            return;
        }
        if(level>=ans.size()){
            vector<int> layer;
            ans.push_back(layer);
        }
        ans[level].push_back(node->val);
        if(node->left!=nullptr){
            dfs(ans, node->left, level+1);
        }
        if(node->right!=nullptr){
            dfs(ans, node->right, level+1);
        }
    }

    /*
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        // stack LIFO
        queue<TreeNode*> tmp;
        vector<vector<int>> ans;
        if(root!=nullptr){
            tmp.push(root);
        }else{
            return ans;
        }
        while(!tmp.empty()){
            vector<TreeNode*> layerNode;
            vector<int> layer;
            // 取出一层
            while(!tmp.empty()){
                layerNode.push_back(tmp.front());
                tmp.pop();
            }            
            for(auto node: layerNode){
                layer.push_back(node->val);
                if(node->left!=nullptr){
                    tmp.push(node->left);
                }
                if(node->right!=nullptr){
                    tmp.push(node->right);
                }
            }
            ans.insert(ans.begin(),layer);
        }
        return ans;
    }
    */
};
// @lc code=end

