#include <iostream>

/*Reverse of Pattern 1
Complexity analysis : 
Time Complexity : O(N^2).
Space Complexity : O(1). */

using namespace std;

int main()
{
    
    int n{5};
    
    for(int i{n}; i > 0; --i)
    {
        for(int j{i}; j > 0; --j)
        {
            cout << "*" << " ";
        }
        
        cout << "\n";
    }
    return 0;
}
