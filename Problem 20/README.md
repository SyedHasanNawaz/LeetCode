🧩 Problem: Symmetric Tree (LeetCode #101)

Description:
Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

Example 1:
Input: root = [1,2,2,3,4,4,3]
Output: true

Example 2:
Input: root = [1,2,2,null,3,null,3]
Output: false

🔍 Code Summary
Approach Used:
This solution performs two traversals:

One from the left subtree in root-left-right order.

One from the right subtree in root-right-left order.
Both traversals record node values and -101 as a marker for nullptr. The tree is symmetric if both result sequences match. See Q.cpp for the implementation.

Logic:

If root is null, return true.

Traverse left and right subtree in mirrored order.

Store traversal in two vectors.

Compare both vectors element by element.

Return true if identical; otherwise, false.

🧠 Demonstrated Skills

Tree traversal

Symmetry via mirrored recursion

Vector comparison

Null handling with sentinel values
