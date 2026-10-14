#include <iostream>

using namespace std;

int main()
{
    char n{'E'};
    
    for(char i{'A'}; i<=n; ++i )
    {
        for(char j{1}; j <= static_cast<int>(n-i); ++j)
        {
            cout << " ";
        }
        
        for(char k{'A'}; k<=i; ++k)
        {
            cout << k;
        }
        
        for(char l{'A'}; l <= i - 1; ++l)
        {
            cout << l;
        }
        
        cout << "\n";
    }

    return 0;
}
