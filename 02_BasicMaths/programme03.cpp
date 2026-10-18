#include <iostream>

int main()
{
    int n{25785};
    
    std::cout << "Reverse of the number is : ";
    
    for(int q{n}; q>0; q=q/10)
    {
       int r = q%10;
       
       std::cout << r;
    }

    return 0;
}
