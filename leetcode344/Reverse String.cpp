/*
344. Reverse String
*/

class Solution 
{
public:
    string reverseString(string s) 
	{
		
		auto siter1 = s.begin();
		auto siter2 = s.rbegin();

		for (int i = 0; i < s.size() / 2; i++)
		{
			*siter1 ^= *siter2;
			*siter2 ^= *siter1;
			*siter1 ^= *siter2;
			siter1++;
			siter2++;
		}
		string tmp(s);

		return tmp;
    }
};


