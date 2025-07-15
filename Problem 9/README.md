🧩 Problem: Find the Index of the First Occurrence in a String (LeetCode #28)

Description:
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Example 1:
Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6. The first occurrence is at index 0, so we return 0.

Example 2:
Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.

🔍 Code Summary
Approach Used:
This solution uses a simple brute-force approach by checking each substring of haystack (of length equal to needle) to see if it matches needle. It returns the index of the first match. See Q.cpp for the implementation.

Logic:

Get lengths of haystack and needle.

Loop from i = 0 to n - m (inclusive).

Compare the substring haystack[i...i+m] with needle.

If matched, return i.

If no match found, return -1.

🧠 Demonstrated Skills

String manipulation

Looping with range limits

Substring comparison

Brute-force search technique
