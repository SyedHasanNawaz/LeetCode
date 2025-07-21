🧩 Problem: Sqrt(x) (LeetCode #69)

Description:
Given a non-negative integer x, return the square root of x rounded down to the nearest integer.
You must not use any built-in exponent function or operator (e.g., pow, sqrt, or \*\* 0.5).

Example 1:
Input: x = 4
Output: 2
Explanation: √4 = 2.

Example 2:
Input: x = 8
Output: 2
Explanation: √8 ≈ 2.828..., rounded down is 2.

🔍 Code Summary
Approach Used:
Binary search to find the integer part of the square root. Multiply middle \* middle using long long to avoid overflow. Update bounds based on the comparison.

Logic:

Initialize low = 0, high = x.

While low <= high:

Compute middle = (low + high) / 2.

If middle^2 == x, return middle.

If middle^2 < x, store middle as potential result and move low up.

Else, move high down.

Return result.

🧠 Demonstrated Skills

Binary search

Integer overflow prevention

Loop control and conditionals

Efficient range narrowing
