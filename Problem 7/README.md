🧩 Problem: Remove Duplicates from Sorted Array (LeetCode #26)

Description:  
Given an integer array `nums` sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Return the number of unique elements in `nums`.

You must do this by modifying the input array in-place with O(1) extra memory.

Example 1:  
Input: nums = [1,1,2]  
Output: 2, nums = [1,2,_]  
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively. It does not matter what you leave beyond the returned k (hence they are underscores).

Example 2:  
Input: nums = [0,0,1,1,1,2,2,3,3,4]  
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]  
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.

🔍 Code Summary  
Approach Used:  
This solution uses a two-pointer technique to overwrite duplicates in-place. One pointer (`c`) tracks the position for the next unique element, while the other (`i`) scans through the array. When a new unique value is found, it is placed at position `c`, and `c` is incremented. The function returns `c`, the count of unique elements.

Logic:

- Return 0 if the array is empty.
- Use a pointer to track the position for the next unique element.
- Iterate through the array, comparing each element to the last unique one.
- Overwrite duplicates and increment the unique counter.
- Return the count of unique elements.

🧠 Demonstrated Skills

- In-place array manipulation
- Two-pointer technique
- Efficient O(n) time, O(1) space
- Handling edge
