/*
136
*/
class Solution 
{
public:
	int singleNumber(vector<int>& nums) 
	{
		int singleNum = 0;
		for (auto i = 0; i < nums.size(); i++)
		{
			singleNum ^= nums[i];
		}
		return singleNum;
	}
};