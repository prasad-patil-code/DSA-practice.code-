#include <iostream>

using namespace std;

struct Logic
{
	int N{};

	void Pattern1()
	{
		for(int i{N}; i>0; --i)
		{
			for(int j{1}; j<=i; ++j)
			{
				cout << "*";
			}

			for(int k{1}; k<=2*(N-i); ++k)
			{
				cout << " ";
			}

			for(int j{1}; j<=i; ++j)
			{
				cout << "*";
			}

			cout << "\n";
		}

	}

	void Pattern2()
	{
		for(int i{1}; i<=N; ++i)
		{
			for(int j{1}; j<=i; ++j)
			{
				cout << "*";
			}

			for(int k{1}; k<=2*(N-i); ++k)
			{
				cout << " ";
			}

			for(int j{1}; j<=i; ++j)
			{
				cout << "*";
			}

			cout << "\n";
		}

	}

};

int main()
{
	Logic n1{5};
    n1.Pattern1();
    n1.Pattern2();

    return 0;
}
