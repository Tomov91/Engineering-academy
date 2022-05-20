/*10.	Write a program that inputs an integer and checks whether it is a prime number. */
#include <iostream>

int main()
{
    std::cout << "Input positive number:" << std::endl;
    int n; std::cin >> n;

        if (n == 2 or n == 3) {
            std::cout << "The number " << n << " is Prime" << std::endl;
        }

        else
        {
            if (n % 2 == 0 or n%3==0 or n ==1) {
                std::cout << "The number " << n << " is not Prime" << std::endl;
            }
            else
            {
                std::cout << "The number " << n << " is Prime" << std::endl;
            }
        }
}

