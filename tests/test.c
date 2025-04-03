#include <stdio.h>
#include <assert.h>
#include "../solutions/solution.c"
void runTests() {
    int passedTests = 0;

    // Test Cases
    int test1[] = {3, 0, 1};
    assert(missingNumber(test1, 3) == 2);
    passedTests++;

    int test2[] = {0, 1};
    assert(missingNumber(test2, 2) == 2);
    passedTests++;

    int test3[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    assert(missingNumber(test3, 9) == 8);
    passedTests++;

    int test4[] = {0};
    assert(missingNumber(test4, 1) == 1);
    passedTests++;

    int test5[] = {0, 1, 2, 3, 5};
    assert(missingNumber(test5, 5) == 4);
    passedTests++;

    int test6[] = {1, 2, 3};
    assert(missingNumber(test6, 3) == 0);
    passedTests++;

    int test7[] = {4, 3, 2, 0, 1};
    assert(missingNumber(test7, 5) == 5);
    passedTests++;

    int test8[] = {1};
    assert(missingNumber(test8, 1) == 0);
    passedTests++;

    int test9[] = {5, 0, 1, 2, 3};
    assert(missingNumber(test9, 5) == 4);
    passedTests++;

    // Large Test Cases
    int testMax[9999];
    for (int i = 0; i < 9999; i++) testMax[i] = i;
    assert(missingNumber(testMax, 9999) == 9999);
    passedTests++;

    int testMin[9999];
    for (int i = 0; i < 9999; i++) testMin[i] = i + 1;
    assert(missingNumber(testMin, 9999) == 0);
    passedTests++;

    printf("✅ %d/11 test cases passed successfully!\n", passedTests);
}

int main() {
    runTests();
    return 0;
}