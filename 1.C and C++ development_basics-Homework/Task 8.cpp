/*8.	The same triangle as previous, but having height and symbol input by the user. */
#include <iostream>

int main()
{
    std::cout << "Choose height: ";
    int height;
    std::cin >> height;
    int size = height * 2;
    char c;
    std::cout << "Choose symbol: ";
    std::cin >> c;
    for (size_t i = 0; i < height; i++)
    {
        int k = i;
        while (k--)
        {
            std::cout << " ";
        }
        size -= 2;
        for (size_t j = 0; j <= size; j++)
        {
            std::cout << c;
        }
        std::cout << std::endl;
    }
}
