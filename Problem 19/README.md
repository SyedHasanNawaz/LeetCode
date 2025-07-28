🧩 Problem: Same Tree (LeetCode #100)

Description:
Given the roots of two binary trees p and q, check if they are the same.
Two binary trees are the same if they are structurally identical and all corresponding nodes have the same value.

Example 1:
Input: p = [1,2,3], q = [1,2,3]
Output: true

Example 2:
Input: p = [1,2], q = [1,null,2]
Output: false

Example 3:
Input: p = [1,2,1], q = [1,1,2]
Output: false

🔍 Code Summary
Approach Used:
This solution uses recursion to compare the structure and values of both trees simultaneously. It avoids extra space and directly returns false if any mismatch is found. See Q.cpp for the implementation.

Logic:

If both nodes are null, return true.

If only one is null or values differ, return false.

Recursively compare left subtrees and right subtrees.

Return true only if both sides match.

🧠 Demonstrated Skills

Recursive tree comparison

Binary tree traversal

Null checks and base conditions

Logical short-circuiting
