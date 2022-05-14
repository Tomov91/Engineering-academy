/*3.	Write a program that inputs three real numbers and outputs whether they can be sides of a triangle*/

#include <iostream>

int main()
{
    int a, b, c; 
    std::cout << "Input sides of triangle: " << std::endl;
    std::cin >> a >> b >> c;
    if (a + b > c and a + c > b and b + c > a) {
        std::cout << "It's a valid triangle" << std::endl;
    }
    else
    {
        std::cout << "It can not be valid triangle" << std::endl;
    }
}

