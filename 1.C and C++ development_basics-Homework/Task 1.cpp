#include <iostream>
/*Problem 1: 1.	Write a program that inputs a positive integer N and outputs the factorial of 2N*/
/*Thus, 2n!=2n.2n−1.2n−2........3.2.1*/
/*Im not sure */
int main()
{
	int n; int sum=1;

    std::cin >> n;

	for (size_t i = 1; i < n; i++)
	{
		sum = sum * (i + 1);
	}

	std::cout << 2*sum;
	std::cout << 
}

