#include <iostream>

/* Number-series right-angled reverse triangle.
Complexity analysis : 
Time Complexity : O(N^2).
Space Complexity : O(1). */

using namespace std;

int main()
{
    
    int n{5};
    
    for(int i{n}; i > 0; --i)
    {
        for(int j{1}; j <= i; ++j)
        {
            cout << j << " ";
        }
        
        cout << "\n";
    }
    return 0;
}
