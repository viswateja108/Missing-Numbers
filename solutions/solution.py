class Solution:
    def missingNumber(self, nums):
<<<<<<< HEAD
        pass # Write your code here
=======
        ans = 0
        n = len(nums)
        for i in range(n + 1):
            ans ^= i
        for num in nums:
            ans ^= num
        return ans
        
>>>>>>> 96dd2db220b0cf85bff8dd6c7615f7e33067fe42
