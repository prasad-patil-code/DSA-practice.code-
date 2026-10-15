#include <iostream>

using namespace std;

int main()
{
	int n{5};

	for(int i{1}; i<=2*n-1; ++i)
		cout << n << " ";

	cout << "\n";

	for(int i{n-1}; i>=1; --i)
	{
		for(int j{n}; j>i; --j)
			cout << j << " ";

		for(int k{1}; k<=2*i-1; ++k )
			cout << i << " ";

		for(int l{i+1}; l<=n; ++l)
			cout << l << " ";

		cout << "\n";
	}

	for(int i{1}; i<=n-2; ++i)
	{
		for(int j{n}; j>i; --j)
			cout << j << " ";

		for(int k{1}; k<=2*i-1; ++k )
			cout << i+1 << " ";

		for(int l{i+1}; l<=n; ++l)
			cout << l << " ";

		cout << "\n";
	}

	for(int i{1}; i<=2*n-1; ++i)
		cout << n << " ";

	return 0;
}
