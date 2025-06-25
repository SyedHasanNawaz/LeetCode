🧩 Problem: Two Sum (LeetCode #1)
Description:
Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to the target. You must not use the same element twice. Exactly one solution exists.

Example:
Input: nums = [2, 7, 11, 15], target = 9  
Output: [0, 1]  
Explanation: nums[0] + nums[1] = 2 + 7 = 9

🔍 Code Summary
Approach Used:
This solution uses a brute-force nested loop to check all possible pairs of numbers in the array. It returns the indices of the first pair that sums to the target.

Logic:
Outer loop selects one number.
Inner loop checks all numbers that come after it.
If a pair adds up to the target, their indices are returned immediately.

🧠 Demonstrated Skills
Clear understanding of array traversal and index manipulation.
Ability to construct correct logic using control flow and nested iteration.
Produces a valid, working solution for guaranteed-input scenarios.

