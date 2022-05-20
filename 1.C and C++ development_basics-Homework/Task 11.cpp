/*11.	Write a program that calculates the following:
R = p1 + 2p2 - 3p3 + 4p4… NpN
where pi is i-th prime number. N is input by the user. 
*/
#include <iostream>
#include<vector>

int main()
{
    std::cout << "Input positive number:" << std::endl;
    int n; std::cin >> n;

    if(n <= 1) 
    std::cout << "Is not prime" << std::endl;

    std::vector<int> nums;
    int sum = 0;
    
    for (int i = 2; i <= n; i++) {
        if (i == 2 or i == 3) {
            nums.push_back(i);
        }

        if (i%2==0 or i%3==0) {

        }
        else
        {
            nums.push_back(i);
        }
    }
    std::cout << "The prime numbers are: " << std::endl;
    for (auto n : nums) {
        std::cout << n << " ";
    }

    int counter = 0;
    int j = 1;
    for (size_t i = 0; i < nums.size(); i++)
    {
        counter++;
        if (counter == 3) {
            sum -= (nums[i]*j);
            counter = 0;
            j++;
        }
        else
        {
            sum += (nums[i] * j);
            j++;
        }
    }
    std::cout << sum;
}
