🧩 Problem: Maximum Depth of Binary Tree (LeetCode #104)

Description:
Given the root of a binary tree, return its maximum depth.
The maximum depth is the number of nodes along the longest path from the root down to the farthest leaf node.

Example 1:
Input: root = [3,9,20,null,null,15,7]
Output: 3

Example 2:
Input: root = [1,null,2]
Output: 2

🔍 Code Summary
Approach Used:
This solution uses depth-first traversal (DFS) with manual depth tracking. A global counter c tracks the current depth, and result stores the max found so far. The function updates result whenever it reaches a nullptr. See Q.cpp for the implementation.

Logic:

If root is null, compare and store the maximum value of c in result.

Recurse into left and right subtrees while incrementing c.

After each recursive call, decrement c to backtrack.

Return result.

🧠 Demonstrated Skills

DFS traversal

Depth tracking

Global state usage

Recursion with backtracking
