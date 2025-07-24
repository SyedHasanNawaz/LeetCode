🧩 Problem: Merge Sorted Array (LeetCode #88)

Description:
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums2 into nums1 so that the resulting array is sorted in non-decreasing order.
Do not return a new array; modify nums1 in-place. nums1 has length m + n, with the last n elements as 0 placeholders.

Example 1:
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]

Example 2:
Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]

Example 3:
Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]

🔍 Code Summary
Approach Used:
This solution merges the two arrays using an auxiliary array and two pointers. It compares elements from both arrays and builds the sorted result in a temporary array, which is then copied into nums1. See Q.cpp for the implementation.

Logic:

If m == 0, assign nums2 to nums1.

Use two pointers (a, b) to track positions in nums1 and nums2.

Compare and insert the smaller value into the result array.

Append remaining elements from either array.

Copy the result back into nums1.

🧠 Demonstrated Skills

Two-pointer technique

Array merging logic

In-place array update via copying

Edge case handling
