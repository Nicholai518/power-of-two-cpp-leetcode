#include <iostream>
using namespace std;

class Solution {
public:
	bool isPowerOfTwo(int n) {
		long i = 1;
		while (i < n) {
			i *= 2;
		}
		return i == n;
	}
};

int main()
{
	Solution solution;
	int example_one = 1;
	int example_two = 16;
	int example_three = 3;

	cout << "Example One : " << solution.isPowerOfTwo(example_one) << endl;
	cout << "Example Two : " << solution.isPowerOfTwo(example_two) << endl;
	cout << "Example Three : " << solution.isPowerOfTwo(example_three) << endl;

	return 0;
}