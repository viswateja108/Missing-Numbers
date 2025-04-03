package tests;
import solutions.Solution;

public class Test {
    public static void main(String[] args) {
        Solution sol = new Solution();
        int passedTests = 0;

        // Basic Test Cases
        if (sol.missingNumber(new int[]{3, 0, 1}) == 2) passedTests++;
        if (sol.missingNumber(new int[]{0, 1}) == 2) passedTests++;
        if (sol.missingNumber(new int[]{9, 6, 4, 2, 3, 5, 7, 0, 1}) == 8) passedTests++;

        // Edge Cases
        if (sol.missingNumber(new int[]{0}) == 1) passedTests++;
        if (sol.missingNumber(new int[]{1, 2, 3}) == 0) passedTests++;
        if (sol.missingNumber(new int[]{4, 3, 2, 0, 1}) == 5) passedTests++;
        if (sol.missingNumber(new int[]{1}) == 0) passedTests++;

        // Complex Cases
        int[] testMax = new int[9999];
        for (int i = 0; i < 9999; i++) testMax[i] = i;
        if (sol.missingNumber(testMax) == 9999) passedTests++;

        int[] testMin = new int[9999];
        for (int i = 0; i < 9999; i++) testMin[i] = i + 1;
        if (sol.missingNumber(testMin) == 0) passedTests++;

        // **New Edge Case - Empty Array** (Critical Fix)
        if (sol.missingNumber(new int[]{}) == 0) passedTests++;

        System.out.println("✅ " + passedTests + "/10 test cases passed successfully!");
    }
}