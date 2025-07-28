#include <iostream>
#include <string>
#include <vector>

using namespace std;
struct TreeNode
{
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
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        vector<int> result1;
        vector<int> result2;

        if (p == nullptr && q == nullptr)
            return true;
        if (p == nullptr || q == nullptr)
            return false;

        if (p->left != nullptr || q->left != nullptr)
        {
            if (!isSameTree(p->left, q->left))
                return false;
        }

        result1.push_back(p->val);
        result2.push_back(q->val);

        if (p->right != nullptr || q->right != nullptr)
        {
            if (!isSameTree(p->right, q->right))
                return false;
        }

        if (result1 == result2)
        {
            return true;
        }
        return false;
    }
};