#include <iostream>

using namespace std;

int main()
{
    int n { 5 };

    for (int i = 1; i <= n; ++i)
    {
        // Print leading spaces (n - i spaces)
        for (int j = 0; j < n - i; ++j)
        {
            cout << " ";
        }
        
        // Print stars (2 * i - 1 stars)
        for (int k = 0; k < 2 * i - 1; ++k)
        {
            cout << "*";
        }
        
        cout << "\n";
    }

    return 0;
}
