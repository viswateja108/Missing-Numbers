package solutions;
public class Solution {
    public int missingNumber(int[] nums) {
        int ans = 0;
        int n = nums.length;

        // XOR all elements from 0 to n.
        for (int i = 0; i <= n; i++) {
            ans ^= i;
        }

        // XOR with array elements.
        for (int num : nums) {
            ans ^= num;
        }
        return ans;
    }
}
