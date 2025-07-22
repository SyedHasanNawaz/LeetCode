🧩 Problem: Climbing Stairs (LeetCode #70)

Description:
You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Example 1:
Input: n = 2
Output: 2
Explanation:

1 step + 1 step

2 steps

Example 2:
Input: n = 3
Output: 3
Explanation:

1 step + 1 step + 1 step

1 step + 2 steps

2 steps + 1 step

🔍 Code Summary
Approach Used:
This solution uses dynamic programming with constant space. It builds the number of ways iteratively using the Fibonacci pattern:
ways(n) = ways(n-1) + ways(n-2).
See Q.cpp for the implementation.

Logic:

Initialize two variables a and b to 1 (base cases for 0 and 1 steps).

Loop from 2 to n: compute next value as sum of previous two.

Update a and b accordingly.

Return b as the result.

🧠 Demonstrated Skills

Dynamic programming

Fibonacci sequence

Space optimization

Iterative algorithm design
