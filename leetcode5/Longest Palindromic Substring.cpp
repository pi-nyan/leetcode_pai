//涉及奇偶的问题尝试使用填充#
//manacher‘s algorithm 马拉车算法
class Solution {
public:
	string longestPalindrome(string s) {
		string t = "$#";
		for (auto i = 0; i < s.size(); i++)
		{
			t += s[i];
			t += "#";
		}

		std::vector<int> len(t.size(), 0);
		auto mx = 0, p0 = 0, maxlength = 0, maxcenter = 0;
		for (auto i = 0; i < t.size(); i++)
		{
			len[i] = mx > i ? min(mx - i, len[2 * p0 - i]) : 1;
			while (t[i + len[i]] == t[i - len[i]])
			{
				++len[i];
			}
			if (mx < i + len[i])
			{
				mx = i + len[i];
				p0 = i;
			}
			if (maxlength < len[i])
			{
				maxlength = len[i];
				maxcenter = i;
			}
		}
		return s.substr((maxcenter - maxlength) / 2, maxlength - 1);
	}
};