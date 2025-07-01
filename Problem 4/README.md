🧩 Problem: Valid Parentheses (LeetCode #20)
Description:
Given a string s containing just the characters '(', ')', '{', '}', '[', and ']', determine if the input string is valid.

A string is valid if:

Open brackets are closed by the same type of brackets.

Open brackets are closed in the correct order.

Every closing bracket has a corresponding opening bracket.

Example 1:
Input: s = "()"
Output: true

Example 2:
Input: s = "([)]"
Output: false
Explanation: Incorrect order of brackets.

🔍 Code Summary
Approach Used:
This solution uses a stack to validate the order and type of brackets. For every character:

Push opening brackets to the stack.

On encountering a closing bracket:

Check if the stack is empty (invalid case).

Pop the top element and ensure it matches the corresponding opening bracket.

Return true if the stack is empty at the end (all brackets matched properly).

🧠 Demonstrated Skills

Efficient use of stack data structure.

Strong control flow logic with conditionals.

Correct handling of nested and unordered brackets.

Clean and readable C++ code.
