#include <iostream>
#include <cmath>

using namespace std; 

double non_recursive(int n)
{
    return pow(2, n) - 1;
}

double recursive(int n)
{
    double H; // int can be too small for more levels ~> 14
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
        cout << "Error occured, n < 0!" << endl;
        return 0;
    }
    return H;
}

int main()
{
    int levels;
    cout << "Welcome to Tower of Hanoi calculator!" << endl;
    cout << "Enter amount of levels: ";

    cin >> levels;

    // Handle wrong levels values
    if (!levels || levels < 0)
    {
        cout << "Number of levels must be an integer value greater than 0!" << endl;
    }

    else
    {
        // Print results
        cout << "Calculated minimal number of moves required to solve the puzzle is: " << endl;
        cout << non_recursive(levels) << " using non-recursive method;" << endl;
        cout << recursive(levels) << " using recursive method." << endl;
    }
    return 0;
}
