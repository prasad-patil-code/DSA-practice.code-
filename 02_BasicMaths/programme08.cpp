#include <iostream>

using namespace std;

int main()
{
	int n{153};
    int sum{0};
    int r;
    
	for(int q{n}; q>0; q /= 10)
	{
		 r = q%10;
		sum = sum + (r*r*r);
	}
	
	if (sum == n)
	   cout << "Palindrome";
	else
	   cout << "Not a Palindrome";
	
	return 0;
}
