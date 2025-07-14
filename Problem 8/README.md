🧩 Problem: Remove Element (LeetCode #27)
**Description:**
Given an integer array `nums` and an integer `val`, remove all occurrences of `val` in-place. Return the number of elements remaining that are not equal to `val`.
You must modify the input array in-place such that the first `k` elements contain the valid result. The order of elements can be changed.

**Example 1:**
Input: nums = \[3,2,2,3], val = 3
Output: 2, nums = \[2,2,_,_]
Explanation: First two elements are 2. The rest can be anything.

**Example 2:**
Input: nums = \[0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = \[0,1,4,0,3,_,_,\_]
Explanation: First five elements are not 2. Remaining elements are irrelevant.

🔍 **Code Summary**
**Approach Used:**
Use a two-pointer technique. One pointer (`counter`) tracks the next index to write non-`val` elements. Iterate through `nums`, and when the current element isn't `val`, assign it to `nums[counter]` and increment `counter`. Return `counter` at the end. See `Q.cpp` for implementation.

🧠 **Demonstrated Skills**

- In-place array manipulation
- Two-pointer technique
- Efficient space usage (O(1) extra space)
- Basic iteration and conditionals
