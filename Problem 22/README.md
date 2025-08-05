🧩 Problem: Best Time to Buy and Sell Stock (LeetCode #121)

Description:
You are given an array prices where prices[i] is the price of a given stock on the i-th day.
Return the maximum profit you can achieve by choosing one day to buy and a later day to sell.
If no profit is possible, return 0.

Example 1:
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price=1), sell on day 5 (price=6)

Example 2:
Input: prices = [7,6,4,3,1]
Output: 0
Explanation: No profitable transaction is possible

🔍 Code Summary
Approach Used:

First tries checking if max price comes after min price — if so, return max - min directly.

Otherwise, performs a single pass tracking the minimum price seen so far and computes max profit using profit = max(profit, prices[i] - minSoFar).

Skills Demonstrated:

Array traversal

Greedy technique

Optimization with early return

Min tracking for max diff computation
