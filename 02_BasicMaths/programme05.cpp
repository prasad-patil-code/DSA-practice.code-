#include <iostream>

using namespace std;

int main()
{
	int n{9284};
	int r{0};
	int a{0};
	
	for(int q{n}; q > 0; q /= 10)
	{
		
		r = q%10;
		
		if (a<r)
		   a = r;
	}
	
	cout << "Greatest digit is : " << a;
	
	return 0;
}
