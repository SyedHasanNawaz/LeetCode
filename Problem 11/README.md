🧩 Problem: Length of Last Word (LeetCode #58)

Description:
Given a string s consisting of words and spaces, return the length of the last word in the string.
A word is a maximal substring consisting of non-space characters only.

Example 1:
Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.

Example 2:
Input: s = " fly me to the moon "
Output: 4
Explanation: The last word is "moon" with length 4.

Example 3:
Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.

🔍 Code Summary
Approach Used:
This solution scans the string from the end, skipping trailing spaces. It then counts characters until another space is found, indicating the start of the last word. See Q.cpp for the implementation.

Logic:

Initialize count c as 0.

Loop from end to start of the string.

Skip spaces until a word starts.

Count characters until a space is found again.

Return the count.

🧠 Demonstrated Skills

String traversal

Reverse iteration

Space handling

Edge case control
