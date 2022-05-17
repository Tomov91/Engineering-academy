/*4.	Write a program that calculates and outputs the first N even Fibonacci numbers, separated by comma and space.
        N is entered from the standard input.*/
#include <iostream>

int main()
{
	char const*sep = "";
    int n; int sum = 0; int curr = 1; int next = 0;
    std::cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		sum = curr + next;
		next = curr;
		curr = sum;
		if (sum % 2 == 0) {
			std::cout << sep << sum ;
			sep = ", ";
		}
	}
}
