/*7.	Write a program that outputs the following triangle (height = 11): 
                       *********************
                        *******************
                         *****************
                          ***************
                           *************
                            ***********
                             *********
                              *******
                               *****
                                ***
                                 *
                      
              
*/
#include <iostream>

int main()
{
    int height = 11;
    int size = height * 2;
    for (size_t i = 0; i < height; i++)
    {
        int k = i;
        while (k--)
        {
            std::cout << " ";
        }
        size-=2;
        for (size_t j = 0; j <= size; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

}
