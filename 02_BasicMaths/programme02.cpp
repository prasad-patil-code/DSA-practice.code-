#include <iostream>

int main()
{
    int n{235};
    
    int i{0};
    
    for(int q{n}; q>0; q=q/10)
    {
       int r {q%10};
       
        if(r%2 != 0)
           ++i;
    
    }
    
    std::cout << "Number of odd digits is : " << i;

    return 0;
}
