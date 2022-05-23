/*14.	Write a program to print the number of digits in the Nth palindromic prime number. */
#include <iostream>
#include<string>
#include<vector>

std::vector<int> isPalindrome(int& number,std::vector<int>& palindromes)
{
    for (int i = 1; i <= number; i++) {
        std::string temp = std::to_string(i);
        for (int j = 0; j < temp.length() / 2; j++) {
            if (temp[j] == temp[temp.length() - j - 1]) {
                palindromes.push_back(i);
            }
        }
    }
    return palindromes;
}

int main()
{
	std::cout << "Set range:";
    int setRange;
    std::string number;
    std::vector<int> palindroms;
    std::vector<int> primePalindroms;
    std::cin >> setRange;
    palindroms = isPalindrome(setRange, palindroms);
    for (const auto n : palindroms) {
        if (n % 2 == 0 or n % 3 == 0) {
            continue;
        }
        else
        {
            primePalindroms.push_back(n);
        }
    }
    if (primePalindroms.size() == 1) {
        std::cout << "There is only 1 Palindromic, Prime number and it have 2 digits in it." << std::endl;
    }
    std::cout << "There is " << primePalindroms.size() << " Palindromic, Prime numbers." << std::endl;
    std::cout << "Select a number between 1 and " << primePalindroms.size() << " : ";
    int n; std::cin >> n;
    std::string var = std::to_string(primePalindroms[n]);
    std::cout << "The number of digits are: " << var.length() << std::endl;
    
}

