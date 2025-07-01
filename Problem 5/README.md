🧩 Problem: Merge Two Sorted Lists (LeetCode #21)
Description:
You are given the heads of two sorted linked lists list1 and list2.
Merge the two lists into one sorted list by splicing together their nodes.
Return the head of the merged linked list.

Constraints:

Number of nodes in both lists: [0, 50]

Node values: [-100, 100]

Both lists are sorted in non-decreasing order.

Example 1:
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]

Example 2:
Input: list1 = [], list2 = []
Output: []

Example 3:
Input: list1 = [], list2 = [0]
Output: [0]

🔍 Code Summary

This solution uses a dummy node and iteratively compares nodes from both lists:

A new node is added to the result list based on which input node has a smaller value.

Remaining nodes from the non-empty list are added after one list ends.

A dummy node simplifies handling the head of the result list.

🧠 Demonstrated Skills

Linked list manipulation

Use of dummy node technique to simplify list operations

Clean iterative merging logic

Memory management with dynamic node allocation in C++
