#include <iostream>
//this programme prints the divisors or factors of a number.
using namespace std;

int main()
{
	int n{12};

	for(int j{1}; j <= n; ++j)
	{
		if(n%j == 0)
			cout << j << "  ";
	}

	return 0;
}
