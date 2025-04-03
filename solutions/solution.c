#include <stdio.h>
#include <assert.h>

int missingNumber(int* nums, int numsSize) 
{
<<<<<<< HEAD
  // write your code here
}
=======
  int ans = 0;
  for (int i = 0; i <= numsSize; i++) {
      ans ^= i;
  }
  for (int i = 0; i < numsSize; i++) {
      ans ^= nums[i];
  }
  return ans;
}
>>>>>>> 96dd2db220b0cf85bff8dd6c7615f7e33067fe42
