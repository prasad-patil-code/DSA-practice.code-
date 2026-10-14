#include <iostream>

using namespace std;

int main()
{
    int n{5};
    
    for(int i{1}; i <= n; ++i)
    {
        for(int j{1}; j <= i; ++j)
        {
            cout << j;
        }
        
        for(int k{1}; k <= 2*(n-i); ++k)
        {
            cout << " ";
        }
        
        for(int l{0}; l < i; ++l)
        {
            cout << i-l;
        }
        
        cout << "\n";
    }
    
    return 0;
}
