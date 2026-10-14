#include <iostream>

using namespace std;

int main()
{
    int n{5};

    for(int i{1}, j{0}; j < n; i = i+j, ++j)
    {
        for(int k{i}; k <= i+j ; ++k)
        {
            cout << k << " ";
        }
        
        cout << "\n";
    }
    
    return 0;
}
