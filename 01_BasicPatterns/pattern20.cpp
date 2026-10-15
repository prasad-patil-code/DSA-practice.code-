#include <iostream>

using namespace std;

int main()
{
	int n{5};

	for (int i{1}; i <= n; ++i)
	{
		for (int j{1}; j <= i; ++j)
		{
			cout << "*";
		}

		for (int k{1}; k <= 2 * (n - i); ++k)
		{
			cout << " ";
		}

		for (int l{1}; l <= i; ++l)
		{
			cout << "*";
		}

		cout << "\n";
	}

	for (int i{n}; i > 0; --i)
	{
		for (int j{1}; j <= i - 1; ++j)
		{
			cout << "*";
		}

		for (int k{1}; k <= 2 * (n - (i - 1)); ++k)
		{
			cout << " ";
		}

		for (int l{1}; l <= i - 1; ++l)
		{
			cout << "*";
		}

		cout << "\n";
	}

	return 0;
}
