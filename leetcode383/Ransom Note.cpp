class Solution {
public:
	bool canConstruct(string ransomNote, string magazine) {
		if (ransomNote.size() > magazine.size())
		{
			return false;
		}

		vector<int> rvec(256,0);
		vector<int> mvec(256,0);

		for (auto i = 0; i < ransomNote.size(); i++)
		{
			rvec[ransomNote[i]]++;
		}
		for (auto i = 0; i < magazine.size(); i++)
		{
			mvec[magazine[i]]++;
		}
		for (auto i = 0; i < 256; i++)
		{
			if (rvec[i] > mvec[i])
			{
				return false;
			}
		}
		return true;
	}
};