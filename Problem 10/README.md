🧩 Problem: Search Insert Position (LeetCode #35)

Description:
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
The algorithm must run in O(log n) time.

Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2

Example 2:
Input: nums = [1,3,5,6], target = 2
Output: 1

Example 3:
Input: nums = [1,3,5,6], target = 7
Output: 4

🔍 Code Summary
Approach Used:
This solution uses a linear scan through the sorted array. It checks for equality or the first element greater than the target and returns the index. If the target is greater than all elements, it returns the next index. See Q.cpp for the implementation.

Logic:

Loop through each element of the array.

If the current element equals the target, return its index.

If current element is greater than target, return the current index.

If the loop reaches the last index and target is still greater, return i + 1.

🧠 Demonstrated Skills

Array traversal

Conditional logic

Insert position logic in sorted arrays

Linear search as a fallback for binary constraints
