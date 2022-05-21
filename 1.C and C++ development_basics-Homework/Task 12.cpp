/*12.	Write a program that prints the maximum number in a hailstone sequence,
        given the seed N. The seed is entered from the standard input. */

#include <iostream>
#include<vector>
#include<algorithm>

int main()
{
	std::vector<int> numbers;
    int n; std::cin >> n;
	while (n!=1)
	{
		if (n % 2 == 0) {
			n = n / 2;
		}
		else
		{
			n = (3 * n + 1);
		}
		numbers.push_back(n);
	}
	std::cout << *max_element(numbers.begin(), numbers.end());
}

