"""🚀 This is the beginning of my Data Structures & Algorithms journey!

Solved my first LeetCode problem — “Two Sum” using Python.
Implemented the brute force approach with nested loops to find the indices of two numbers whose sum equals the target value.

Through this problem, I learned:
🔹 Array traversal
🔹 Nested loops
🔹 Index handling
🔹 Brute force approach
🔹 Time Complexity basics

Time Complexity: O(n²)
LEETCODE Problem Number---01
"""

class Solution(object):
    def twoSum(self, nums, target):

        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):

                if (nums[i] + nums[j]) == target:
                    return [i, j]
obj=Solution()
l=list() 
lim=int(input("Enter the limit:")) 

for i in range(lim):
    n=int(input(f"Enter the {i} index Element:")) 
    l.append(n)
    
print(f"Array is: {l}")
target=int(input("Enter the target:"))
p=obj.twoSum(l,target)
print(f"Indices whose elements produces sum {target} are : {p}")
  


