#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> arr{2,2,3,3,3,5};

	sort(arr.begin(), arr.end());

	int n = arr.size();
	int lowestfrequency{n+1};
	int currentfrequency{1};

	for(size_t i{1}; i < n; ++i)
	{
		if(arr[i] == arr[i-1])
			++currentfrequency;
		else
		{
			if(currentfrequency < lowestfrequency)
			{
				lowestfrequency = currentfrequency;
			}
			currentfrequency = 1;
		}


	}

	if(currentfrequency < lowestfrequency)
	{
		lowestfrequency = currentfrequency;
	}

	cout << lowestfrequency;

	return 0;
}
