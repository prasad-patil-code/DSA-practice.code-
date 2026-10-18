#include <iostream>

using namespace std;

int main()
{
    int n{93};
    int i{0};
    
    for(int j{1}; j < n; ++j)
    {
        if(n%j == 0)
           ++i;
    }
    
    if(i == 1)
        cout << "prime";
    else
        cout << "not prime";
    
    return 0;
}
