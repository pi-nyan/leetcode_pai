class Solution {
public:
	bool isAnagram(string s, string t) {
		if (s.size() != t.size())
			return false;

		vector<int> svec(256, 0);
		vector<int> tvec(256, 0);

		for (auto i = 0; i < s.size(); i++)
			svec[s[i]]++;

		for (auto i = 0; i < s.size(); i++)
			tvec[t[i]]++;
		
		for (auto i = 0; i < 256; i++)
		{
			if (svec[i] != tvec[i])
				return false;
		}
		return true;
	}
};