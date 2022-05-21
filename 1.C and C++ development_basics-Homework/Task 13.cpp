/*13.	Write a program that is capable of inputting very long (i.e. 40-digit) numbers
        from the standard input and checks whether the number is a palindrome. 
        The program shall write “Palindromic” or “Not palindromic” to the standard output. */

#include <iostream>
#include<string>
std::string isPalindrome(std::string& number)
{
    // Iterate over the range [0, N/2]
    for (int i = 0; i < number.length() / 2; i++) {
        if (number[i] != number[number.length() - i - 1]) {
            return "Not Palindromic";
        }
    }
    return "Palindromic";
}

int main()
{
    std::string number;
    std::cin >> number;
    std::cout << isPalindrome(number);

    return 0;
}

