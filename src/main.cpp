#include <iostream>
#include <cmath>
#include "non_recursive.hpp"
#include "recursive.hpp"



int main()
{
    int levels;
    std::cout << "Welcome to Tower of Hanoi calculator!" << std::endl;
    std::cout << "Enter amount of levels: ";

    std::cin >> levels;

    // Handle wrong levels values
    if (!levels || levels < 0)
    {
        std::cout << "Number of levels must be an integer value greater than 0!" << std::endl;
    }

    else
    {
        // Print results
        // Unnecessary comment to justify new brach
        std::cout << "Calculated minimal number of moves required to solve the puzzle is: " << std::endl;
        std::cout << non_recursive(levels) << " using non-recursive method;" << std::endl;
        std::cout << recursive(levels) << " using recursive method." << std::endl;
    }
    return 0;
}
