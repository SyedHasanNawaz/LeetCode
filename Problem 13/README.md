🧩 Problem: Add Binary (LeetCode #67)

Description:
Given two binary strings a and b, return their sum as a binary string.

Example 1:
Input: a = "11", b = "1"
Output: "100"

Example 2:
Input: a = "1010", b = "1011"
Output: "10101"

🔍 Code Summary
Approach Used:
Pad the shorter string with leading zeroes. Then, iterate from the end of both strings, summing digits and handling carry. Add remaining carry at the end if needed.

Logic:

Pad strings to equal length.

Initialize carry = 0 and an empty result string.

Loop from end to start:

Convert characters to int, sum with carry.

Determine result bit and carry.

After loop, prepend '1' if carry is 1.

Return the result.

🧠 Demonstrated Skills

Binary arithmetic

String manipulation

Carry handling

Reverse iteration

Edge case control for different lengths
