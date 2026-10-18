#include <iostream>

using namespace std;

int main()
{
	int a{27};
	int b{18};
	int r, q;

	while(r != 0)
	{
		int s{b};

		q = a/b;
		r = a%b;

		a = s;
		b = r;
  }

	cout << "GCD is : " << a;

	return 0;
}
