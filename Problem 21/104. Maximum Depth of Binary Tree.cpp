#include <iostream>
#include <string>
#include <vector>

using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
public:
    int result = 0;
    int c = 0;

    int maxDepth(TreeNode *root)
    {
        if (root == nullptr)
        {
            if (result < c)
                result = c;
            return result;
        }

        c++;
        maxDepth(root->left);
        maxDepth(root->right);
        c--;

        return result;
    }
};
