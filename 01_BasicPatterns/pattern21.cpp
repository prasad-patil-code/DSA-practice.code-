#include <iostream>

using namespace std;

int main()
{
	int n{5};
	
	for(int i{1}; i<=n; ++i)
	{
		cout << "*";
	}
	
	cout << "\n";
	
	for(int j{1}; j<=n-2; ++j)
	{
		cout << "*";
		
		for(int k{1}; k<=n-2; ++k)
		{
			cout << " ";
		}
		
		cout << "*";
		
		cout << "\n";
	}
	
		
	for(int i{1}; i<=n; ++i)
	{
		cout << "*";
	}
	
	return 0;
}
