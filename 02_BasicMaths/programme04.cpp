#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n{121};
    
    int r;
    int sum{0};
    double j{0};
    
    for(int q{n}; q>0; q=q/10)
    {
        ++j;
    }
    
    for(int q{n}, i{static_cast<int>(std::pow(10.0,j-1.0))}; q>0, i>=1; q=q/10, i = i/10)
    {
        r = q%10;
        
        sum = sum + r*i;
        
    }
    
    if(sum == n)
      cout << "It is a Palindrome number.";
    else
      cout << "It is a not a Palindrome number.";
      
    return 0;
}
