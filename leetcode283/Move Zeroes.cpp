/*
283Move Zeroes
*/

class Solution 
{
public:
	void moveZeroes(vector<int>& nums) 
	{
		auto iter = nums.begin();
		for (int i = 0; i < nums.size(); i++)
		{
			if (*iter == 0)
			{
				nums.erase(iter);
				nums.push_back(0);

			}
			else
			{
				iter++;
			}
		}
	}
};