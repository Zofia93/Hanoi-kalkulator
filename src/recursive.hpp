#include <iostream>
#include <cmath>

double recursive(int n)
{
    double H; // int will be too small for more levels ~> 14
    if (n == 0)
    {
        H = 0;
        return H;
    }
    else if (n > 0)
    {
        n -= 1;
        H = 2 * recursive(n) + 1;
    }
    else
    {
        std::cout << "Error occured, n < 0!" << std::endl;
        return 0;
    }
    return H;
}