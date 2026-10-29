#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
	int secondmostFrequentElement(vector<int>& nums)
	{
		if(nums.empty())
			return -1;

		sort(nums.begin(), nums.end());

		int currentfrequency{1};
		int maxfrequency {0};
		int sec_f{0};
		int answer{nums [0]} ;

		for(std :: size_t i{0}; i<nums.size()-1; ++i)
		{
			if(nums [i] == nums [i+1])
				++currentfrequency;
			else
				currentfrequency = 1;
			if(currentfrequency > maxfrequency)
			{
				sec_f = maxfrequency;
				maxfrequency = currentfrequency;
			}

		}

        currentfrequency = 1;
        
		for(std :: size_t i{0}; i<nums.size()-1; ++i)
		{
			if(nums [i] == nums [i+1])
				++currentfrequency;
			else
				currentfrequency = 1;
			if(currentfrequency == sec_f)
			{
				answer = nums[i];
				break;
			}

		}

		return answer;
	}
};

int main()
{
	std::vector<int> nums{1,2,2,2,3,3,3,5,6,6,7,7,7,7};

	Solution answer{};
	cout << answer.secondmostFrequentElement(nums);

	return 0;
}
