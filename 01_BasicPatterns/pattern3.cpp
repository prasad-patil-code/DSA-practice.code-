#include <iostream>

/* Right angled triangle of numbers.
//Complexity analysis : 
Time Complexity : O(N^2).
Space Complexity : O(1). */

using namespace std;

int main()
{
    
    int n{5};
    
    for(int i{1}; i <= n; ++i)
    {
        for(int j{1}; j <= i; ++j)
        {
            cout << j << " ";
        }
        
        cout << "\n";
    }
    return 0;
}
