#include <iostream>
#include <vector>
#include <cassert>  // For assert statements
#include "../solutions/solution.cpp" // Include solution file
using namespace std;

void runTests() {
    Solution sol;
    int passedTests = 0; // Counter for passed test cases

    // Test Case 1: Basic Test Case
    vector<int> test1 = {3, 0, 1};
    assert(sol.missingNumber(test1) == 2);
    passedTests++;

    // Test Case 2: Small Array with Maximum Value Missing
    vector<int> test2 = {0, 1};
    assert(sol.missingNumber(test2) == 2);
    passedTests++;

    // Test Case 3: Unordered Elements
    vector<int> test3 = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    assert(sol.missingNumber(test3) == 8);
    passedTests++;

    // Test Case 4: Minimum Limit Case
    vector<int> test4 = {0};
    assert(sol.missingNumber(test4) == 1);
    passedTests++;

    // Test Case 5: Maximum Limit Case (Smaller for Demo)
    vector<int> test5 = {0, 1, 2, 3, 5};
    assert(sol.missingNumber(test5) == 4);
    passedTests++;

    // Test Case 6: Zero Missing
    vector<int> test6 = {1, 2, 3};
    assert(sol.missingNumber(test6) == 0);
    passedTests++;

    // Test Case 7: Random Position Missing
    vector<int> test7 = {4, 3, 2, 0, 1};
    assert(sol.missingNumber(test7) == 5);
    passedTests++;

    // Test Case 8: Edge Case with Single Element
    vector<int> test8 = {1};
    assert(sol.missingNumber(test8) == 0);
    passedTests++;

    // Test Case 9: Maximum Element at Start
    vector<int> test9 = {5, 0, 1, 2, 3};
    assert(sol.missingNumber(test9) == 4);
    passedTests++;

    // Edge Case 10: Large Sequence with Last Number Missing
    vector<int> test10(9999);
    for (int i = 0; i < 9999; ++i) test10[i] = i;
    assert(sol.missingNumber(test10) == 9999);
    passedTests++;

    // Edge Case 11: Large Sequence with First Number Missing
    vector<int> test11(9999);
    for (int i = 0; i < 9999; ++i) test11[i] = i + 1;
    assert(sol.missingNumber(test11) == 0);
    passedTests++;

    cout << "✅ " << passedTests << "/11 test cases passed successfully!" << endl;
}

int main() {
    runTests();
    return 0;
}