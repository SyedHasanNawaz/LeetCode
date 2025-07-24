🧩 Problem: Binary Tree Inorder Traversal (LeetCode #94)

Description:
Given the root of a binary tree, return the inorder traversal of its nodes' values.
Inorder traversal visits nodes in the order: Left → Node → Right.

Example 1:
Input: root = [1,null,2,3]
Output: [1,3,2]
Explanation: Visit left child, then node, then right child.

Example 2:
Input: root = [1,2,3,4,5,null,8,null,null,6,7,9]
Output: [4,2,6,5,7,1,3,9,8]

Example 3:
Input: root = []
Output: []

Example 4:
Input: root = [1]
Output: [1]

🔍 Code Summary
Approach Used:
This solution uses recursion to perform inorder traversal. It visits the left subtree, processes the current node, then the right subtree. A class-level vector stores the result across recursive calls. See Q.cpp for the implementation.

Logic:

Base case: if node is nullptr, return.

Recurse into left subtree.

Add current node value to result.

Recurse into right subtree.

Return the result vector.

🧠 Demonstrated Skills

Binary tree traversal

Recursive logic

Vector manipulation

Depth-first traversal
