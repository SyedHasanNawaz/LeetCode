🧩 Problem: Plus One (LeetCode #66)

Description:
You are given a large integer represented as an array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant (left to right).
Increment the large integer by one and return the resulting array of digits.
The input array does not contain any leading zeros.

Example 1:
Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123. Adding 1 gives 124.

Example 2:
Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321. Adding 1 gives 4322.

Example 3:
Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9. Adding 1 gives 10.

🔍 Code Summary
Approach Used:
Iterate the array from the end, checking for digits less than 9. If found, increment and return. If all are 9, set them to 0 and insert 1 at the beginning.

Logic:

Start from the last digit.

If digit < 9: increment it and return.

Else, set it to 0 and continue.

If loop completes, all were 9 — insert 1 at the front.

🧠 Demonstrated Skills

Array traversal

Carry handling

Edge case: all 9s

In-place update and vector manipulation in C++
