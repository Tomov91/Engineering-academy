/*6.	Write a program that checks and prints whether two rectangles overlap.
        The rectangles’ sides are parallel to x and y axes. 
        Each rectangle is determined by the coordinates of its upper-left and lower-right corner. 
        Those coordinates need to be input (you may use integer numbers). 
    1.	Example output: Rectangles overlap
*/
#include <iostream>

int main()
{
    int rec1TopLeftX;
    int rec1TopLeftY;
    int rec1BottomRightX;
    int rec1BottomRightY;

    std::cin >> rec1TopLeftX >> rec1TopLeftY >> rec1BottomRightX >> rec1BottomRightY;

    int rec2TopLeftX;
    int rec2TopLeftY;
    int rec2BottomRightX;
    int rec2BottomRightY;

    std::cin >> rec2TopLeftX >> rec2TopLeftY >> rec2BottomRightX >> rec2BottomRightY;

    int rec2BottomLeftX = rec2TopLeftX;
    int rec2BottomLeftY = rec2BottomRightY;

    bool firstCase = rec2TopLeftX < rec1BottomRightX&& rec2TopLeftX > rec1TopLeftX && rec2TopLeftY < rec1TopLeftY&& rec2TopLeftY > rec1BottomRightY;
    bool secondCase = rec2BottomLeftX < rec1BottomRightX&& rec2BottomLeftX > rec1TopLeftX && rec2BottomLeftY > rec1BottomRightY && rec2BottomLeftY < rec1TopLeftY;

    if (firstCase || secondCase)
    {
        std::cout << "Rectangles overlap" << std::endl;
    }
    else
    {
        std::cout << "Rectangles don't overlap" << std::endl;
    }
}

