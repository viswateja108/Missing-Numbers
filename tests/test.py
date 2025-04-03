import unittest
from solutions.solution import Solution

class TestMissingNumber(unittest.TestCase):

    def setUp(self):
        """Initialize solution instance before each test"""
        self.sol = Solution()

    def test_case_1(self):
        self.assertEqual(self.sol.missingNumber([3, 0, 1]), 2)

    def test_case_2(self):
        self.assertEqual(self.sol.missingNumber([0, 1]), 2)

    def test_case_3(self):
        self.assertEqual(self.sol.missingNumber([9, 6, 4, 2, 3, 5, 7, 0, 1]), 8)

    def test_case_4(self):
        self.assertEqual(self.sol.missingNumber([0]), 1)

    def test_case_5(self):
        self.assertEqual(self.sol.missingNumber([0, 1, 2, 3, 5]), 4)

    def test_case_6(self):
        self.assertEqual(self.sol.missingNumber([1, 2, 3]), 0)

    def test_case_7(self):
        self.assertEqual(self.sol.missingNumber([4, 3, 2, 0, 1]), 5)

    def test_case_8(self):
        self.assertEqual(self.sol.missingNumber([1]), 0)

    def test_case_9(self):
        self.assertEqual(self.sol.missingNumber([5, 0, 1, 2, 3]), 4)

    def test_case_10(self):
        self.assertEqual(self.sol.missingNumber(list(range(9999))), 9999)

    def test_case_11(self):
        self.assertEqual(self.sol.missingNumber([i + 1 for i in range(9999)]), 0)

if __name__ == "__main__":
    unittest.main()