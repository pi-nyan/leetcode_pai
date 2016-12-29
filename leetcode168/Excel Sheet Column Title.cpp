class Solution {
public:
	string convertToTitle(int n) {
		auto m = 0;
		string str;
		char c;
		while (n > 0)
		{
			m = n % 26;
			c = m + '@';
			str += c;
			n /= 26;
		}
		return str;
	}
};