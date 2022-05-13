#include<string>
#include <iostream>
/*2.	Write a program that counts and outputs the number of digits in Nth Fibonacci number 
•	Example:
Please input a positive integer: 13
Number of digits in F5 is: 3
*/
int main()
{
    std::string digits;
    int n; int next = 0; int curr = 1; int sum = 0;
    std::cout << "Please input a positive integer: " << std::endl; std::cin >> n;
    
    for (size_t i = 0; i < n; i++)
    {
        sum = curr + next;
        next = curr;
        curr = sum;
    }
    digits = std::to_string(sum);
    std::cout << digits.length();
}
