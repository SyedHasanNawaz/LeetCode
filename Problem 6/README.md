🧩 Problem: Palindrome Number (LeetCode #9)

Description:  
Given an integer x, return true if x is a palindrome, and false otherwise.

Example 1:  
Input: x = 121  
Output: true  
Explanation: 121 reads as 121 from left to right and from right to left.

Example 2:  
Input: x = -121  
Output: false  
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Example 3:  
Input: x = 10  
Output: false  
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

🔍 Code Summary  
Approach Used:  
This solution converts the integer to a string and checks if the string reads the same forwards and backwards. It returns false for negative numbers and compares mirrored characters to determine if the number is a palindrome. See `Q.cpp` for the implementation.

Logic:

- Convert the integer to a string.
- Compare characters from the start and end moving towards the center.
- Return false if any characters do not match.
- Return false for negative numbers.

🧠 Demonstrated Skills

- String manipulation
- Looping and index logic
- Handling edge
