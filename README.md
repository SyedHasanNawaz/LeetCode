🧩 Problem: Remove Element (LeetCode #27)

Description:
Given an integer array nums and an integer val, remove all occurrences of val in-place. The order of the elements may be changed. Return the number of elements in nums which are not equal to val.

The first k elements of nums must contain the elements not equal to val. The rest can be ignored.

Example 1:
Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 2.

Example 2:
Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3,_,_,_]
Explanation: Your function should return k = 5. The order of valid elements does not matter.

🔍 Code Summary
Approach Used:
This solution uses a two-pointer technique. It iterates through the array and moves all elements not equal to val to the front. The variable counter keeps track of the position for the next valid element. See Q.cpp for the implementation.

Logic:

Initialize counter to 0.

Loop through the array.

If the current element is not equal to val, assign it to nums[counter].

Increment counter.

Return counter.

🧠 Demonstrated Skills

In-place array manipulation

Two-pointer technique

Conditional logic

Efficient memory usage (O(1) space)
