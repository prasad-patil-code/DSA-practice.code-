#include <iostream>

using namespace std;

int main()
{
	int n{30};
	int count{0};

	for(int j{1}; j <= n; ++j)
	{
		int i{0};

		for(int k{1}; k < j; ++k)
		{
			if(j%k == 0)
				++i;
		}

		if(i == 1)
			++count;
	}

	cout << "Prime numbers between " << 1 << " and " << n << " is " << count;

	return 0;
}
