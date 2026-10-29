#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
	int mostFrequentElement(vector<int>& nums)
	{
		if(nums.empty())
			return -1;

		sort(nums.begin(), nums.end());

		int currentfrequency{1};
		int maxfrequency {0} ;
		int answer{nums [0]} ;
		for(size_t i{0}; i<nums.size()-1; ++i)
		{
			if(nums [i] == nums [i+1])
				++currentfrequency;
			else
				currentfrequency = 1;

			if(currentfrequency > maxfrequency)
			{	maxfrequency = currentfrequency;
				answer = nums[i];
			}


		}

		return answer;
	}
};

int main()
{
	vector<int> nums{1, 2, 2, 3, 3, 3};

	Solution answer{};
	cout << answer.mostFrequentElement(nums);

	return 0;
}
