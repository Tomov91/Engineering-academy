/*5.	Write a program that calculates and outputs the sum of the digits of N factorial (N!).*/
#include <string>
#include <iostream>

void sumOfDigits(int n) {
	int result = 0;
	while (n--)
	{
		if (n <= 9) {
			result += n;
		}
	}
	std::cout << result;
}

void digitsOfSum(int n,int sum) {
	int result = 0;

	for (size_t i = 1; i <= n; i++)
	{
		sum = sum * i;
	}

	std::string digits = std::to_string(sum);

	for (char c : digits) {
		result += (int)(c - 48);
	}
	std::cout << result; // 120 \\ (1+2+0) = 3
}

int main()
{
    int n = 5; int sum = 1;
	digitsOfSum(n, sum); // This is sum of the digits of factorial
	sumOfDigits(n); // Doesn't have much sense but, this is the sum of the digits of factorial number
	
}
