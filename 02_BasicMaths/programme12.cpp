#include <iostream>

using namespace std;

int main()
{
	int a{27};
	int b{18};
	int r, q;

	int A = a, B = b;

	while(r != 0)
	{
		int s{B};

		q = A/B;
		r = A%B;

		A = s;
		B = r;
  }

	cout << "LCM is : " << a*b/A;

	return 0;
}
