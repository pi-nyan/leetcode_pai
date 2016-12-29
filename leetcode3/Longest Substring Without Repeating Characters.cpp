class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int ascHash[256] = { 0 };
		auto left = 0, maxLength = 0;
		for (auto i = 0; i < s.size(); i++)
		{
			if (ascHash[s[i]] == 0 || ascHash[s[i]] < left)
			{
				maxLength = maxLength > (i - left + 1) ? maxLength : (i - left + 1);
			}
			else
			{
				left = ascHash[s[i]];
			}
			ascHash[s[i]] = i + 1;
		}

		return maxLength;
	}
};