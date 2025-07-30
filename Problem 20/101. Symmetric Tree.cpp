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
    vector<int> result1;
    vector<int> result2;

    bool isSymmetric(TreeNode *root)
    {
        if (root == nullptr)
            return true;

        leftTree(root->left);
        rightTree(root->right);

        int n1 = result1.size();
        int n2 = result2.size();

        if (n1 != n2)
            return false;

        for (int i = 0; i < n1; ++i)
        {
            if (result1[i] != result2[i])
                return false;
        }

        return true;
    }

    void leftTree(TreeNode *root)
    {
        if (root == nullptr)
        {
            result1.push_back(-101);
            return;
        }

        result1.push_back(root->val);
        leftTree(root->left);
        leftTree(root->right);
    }

    void rightTree(TreeNode *root)
    {
        if (root == nullptr)
        {
            result2.push_back(-101);
            return;
        }

        result2.push_back(root->val);
        rightTree(root->right);
        rightTree(root->left);
    }
};
