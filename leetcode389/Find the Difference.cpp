/*
389Find the Difference
*/

class Solution 
{
public:
	char findTheDifference(string s, string t) 
	{

		if (s.size() == 0)
			return t.front();

		for (auto iters = s.begin()+1; iters != s.end(); iters++)
		{
			s.front() ^= (*iters);
		}
		for (auto itert = t.begin(); itert != t.end(); itert++)
		{
			s.front() ^= (*itert);
		}

		return s.front();
	}
};