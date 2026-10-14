#include <iostream>

using namespace std;

int main()
{
    int n{5};
    
    for(int i{1}; i <= n; ++i )
    {
        for(int j{0}; j < 2*i-1; ++j)
        {
            cout << "*";
        }
        
        cout << "\n";
    }
    
    for(int i{n}; i > 0; --i )
    {
        for(int j{0}; j < 2*i - 1; ++j )
        {
            cout << "*";
        }
        
        cout << "\n";
    }

    return 0;
}
