// Last updated: 6/13/2026, 10:16:20 AM
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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> nodes;
        unordered_set<int> children;

        for (auto& desc : descriptions) {
            int parentVal = desc[0], childVal = desc[1], isLeft = desc[2];

            // Create nodes if they don't exist
            if (!nodes.count(parentVal))
                nodes[parentVal] = new TreeNode(parentVal);
            if (!nodes.count(childVal))
                nodes[childVal] = new TreeNode(childVal);

            // Link child to parent
            if (isLeft)
                nodes[parentVal]->left = nodes[childVal];
            else
                nodes[parentVal]->right = nodes[childVal];

            // Mark as child
            children.insert(childVal);
        }

        // Root is the node never seen as a child
        for (auto& [val, node] : nodes) {
            if (!children.count(val))
                return node;
        }

        return nullptr; // unreachable
    }
};