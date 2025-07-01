🧩 Problem: Roman to Integer (LeetCode #13)
Description:
Given a Roman numeral string, convert it into its corresponding integer value. Roman numerals use combinations of letters from the Latin alphabet (I, V, X, L, C, D, M) to represent numbers. While normally written from largest to smallest, specific subtractive cases exist such as:

IV = 4 (1 before 5)
IX = 9 (1 before 10)
XL = 40, XC = 90
CD = 400, CM = 900

Example:
Input: s = "IX"  
Output: 9  
Explanation: 'I' before 'X' means subtract 1 from 10.

🔍 Code Summary
Approach Used:
This solution manually checks for each Roman numeral pattern using conditional logic inside a loop. Subtractive combinations (like IV, IX, etc.) are checked first. When such a pair is found, their value is added and the index is incremented to skip the next character. Otherwise, normal symbols are added directly.

Logic:
Loop through the string.
Check for subtractive patterns (IV, IX, etc.) using if statements.
Add values accordingly, skipping an extra index when needed.
Accumulate the total result.

🧠 Demonstrated Skills
Strong understanding of conditional flow and string indexing.
Clear implementation of algorithm logic without using extra data structures.
Shows control over string traversal, pattern matching, and cumulative logic.
