#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


class Solution 
{
public:
	vector<int> twoSum(vector<int>& nums, int target) 
	{
		vector<int> twoNumbers;
		unordered_map<int, int> mNumFind;

		for (int i = 0; i < nums.size(); i++)
		{
			if (mNumFind.find(target - nums[i]) == mNumFind.end())
			{
				mNumFind[nums[i]] = i;
			}
			else
			{
				twoNumbers.push_back(mNumFind[target - nums[i]]);
				twoNumbers.push_back(i);
			}
		}


		return twoNumbers;


	}
};