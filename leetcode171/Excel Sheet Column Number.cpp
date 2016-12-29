class Solution {
public:
	int titleToNumber(string s) {
		auto iters = s.rbegin();
		int result = 0;
		for (auto i = 0; i < s.size(); i++)
		{
			result += (*iters - '@') * pow(26, i);
			iters++;
		}
		return result;
	}
};