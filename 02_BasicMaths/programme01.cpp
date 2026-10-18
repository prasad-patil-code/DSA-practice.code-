#include <iostream>

int main()
{
	int n{256};

	int i{0};

	if(n != 0)
	{

		for(int q{n}; q>0; q=q/10)
		{
			++i;

		}
		
		std::cout << "Number of Digits in the number is : " << i;
	}
	else
        std::cout << "Number of Digits in the number is : " << 1;

		

	return 0;
}
