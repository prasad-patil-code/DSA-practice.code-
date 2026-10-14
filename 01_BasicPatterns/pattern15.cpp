#include <iostream>

using namespace std;

int main()
{
    char c{'D'};
    
    for(char i{c}; i>='A'; --i)
    {
       for(char j{'A'}; j<=i; ++j)
       {
           cout << j << " ";
       }
       
       cout << "\n";
    }
    
    
}
