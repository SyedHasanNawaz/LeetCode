🧩 Problem: Remove Duplicates from Sorted List (LeetCode #83)

Description:
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

Example 1:
Input: head = [1,1,2]
Output: [1,2]
Explanation: The duplicate 1 is removed.

Example 2:
Input: head = [1,1,2,3,3]
Output: [1,2,3]
Explanation: Duplicates 1 and 3 are removed.

🔍 Code Summary
Approach Used:
This solution traverses the sorted linked list and removes consecutive duplicate nodes by adjusting pointers. Since the list is sorted, duplicates are guaranteed to be adjacent. See Q.cpp for the implementation.

Logic:

Start with the head of the list.

While current node and its next are not null:

If current node’s value equals next node’s value:

Skip the duplicate node by redirecting next pointer and deleting the duplicate.

Else move to the next node.

Return the head of the modified list.

🧠 Demonstrated Skills

Linked list traversal

Pointer manipulation

Memory deallocation

Conditional logic in data structures
