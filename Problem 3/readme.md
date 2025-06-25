🧩 Problem: Longest Common Prefix (LeetCode #14)
Description:
Write a function to find the longest common prefix string among a given array of strings. If there is no common prefix, return an empty string "".

Example 1:
Input:  strs = ["flower", "flow", "flight"]
Output: "fl"
Example 2:

Input:  strs = ["dog", "racecar", "car"]
Output: ""
Explanation: No common starting substring exists.

🔍 Code Summary
Approach Used:
This solution compares characters of all strings column by column, starting from the first character. It continues adding matching characters to the result until a mismatch is found or a string ends.

Logic:
Use the first string as a reference.
For each character position:
Check if all other strings have the same character at that position.
If not, stop and return the current prefix.
Otherwise, keep appending matching characters to the result.

🧠 Demonstrated Skills
Proficient use of nested loops to compare elements across a vector of strings.
Precise handling of edge cases like empty input or varying string lengths.
Shows control over character-level comparisons and prefix logic.