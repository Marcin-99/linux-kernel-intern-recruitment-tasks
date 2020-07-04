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
        example_input = [3, 4, 3, 0, 2, 2, 3, 0, 0]
        expected_output = 5
        actual_output = solution(example_input)
        self.assertEqual(expected_output, actual_output)

        example_input = [4, 2, 0]
        expected_output = 0
        actual_output = solution(example_input)
        self.assertEqual(expected_output, actual_output)

        example_input = [4, 4, 3, 3, 1, 0]
        expected_output = 3
        actual_output = solution(example_input)
        self.assertEqual(expected_output, actual_output)

        example_input = []
        expected_output = 0
        actual_output = solution(example_input)
        self.assertEqual(expected_output, actual_output)

        example_input = [1, 1, 1, 1, 1, 2]
        expected_output = 5
        actual_output = solution(example_input)
        self.assertEqual(expected_output, actual_output)

        example_input = [6, 5, 4, 3, 2, 1, 0]
        expected_output = 6
        actual_output = solution(example_input)
        self.assertEqual(expected_output, actual_output)

        example_input = [0, 2, 4, 6, 8]
        expected_output = 0
        actual_output = solution(example_input)
        self.assertEqual(expected_output, actual_output)


if __name__ == '__main__':
    unittest.main()
