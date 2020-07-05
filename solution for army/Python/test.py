from solution_function import solution
import unittest


class TestFunctions(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        print('tests: start')
        print("\n")

    @classmethod
    def tearDownClass(cls):
        print("\n")
        print('tests: finish')

    def test_solution(self):
        """
        To add test case, add dict to a list with example input and expected output for it.
        """
        data = [
            {"input": [3, 4, 3, 0, 2, 2, 3, 0, 0], "expected_output": 5},
            {"input": [4, 2, 0], "expected_output": 0},
            {"input": [4, 4, 3, 3, 1, 0], "expected_output": 3},
            {"input": [], "expected_output": 0},
            {"input": [1, 1, 1, 1, 1, 2], "expected_output": 5},
            {"input": [6, 5, 4, 3, 2, 1, 0], "expected_output": 6},
            {"input": [0, 2, 4, 6, 8], "expected_output": 0}
        ]

        for test_case in data:
            output = solution(test_case["input"])
            self.assertEqual(test_case["expected_output"], output)


if __name__ == '__main__':
    unittest.main()
