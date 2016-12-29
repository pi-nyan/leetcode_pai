/*
231
Power of Two
数字题首先考虑位操作


*/


class Solution {
public:
	bool isPowerOfTwo(int n) {
		return (n > 0) && (!(n & (n - 1)));
	}
};





//class Solution {
//public:
//	bool isPowerOfTwo(int n) {
//		int cnt = 0;
//		while (n > 0) {
//			cnt += (n & 1);
//			n >>= 1;
//		}
//		return cnt == 1;
//	}
//};



//#include <math.h>
//
//int root(int m)
//{
//	int Sroot = 1;
//	while (abs(Sroot*Sroot - m) > 1e-9)
//	{
//		Sroot = (Sroot + m / Sroot) / 2;
//	}
//	return Sroot;
//
//}
//
//
//class Solution {
//public:
//	bool isPowerOfTwo(int n) {
//		while (n > 2)
//		{
//			n = root(n);
//		}
//		if (n == 2 || n == 1)
//		{
//			return true;
//		}
//		else if (1 < n < 2 || n < 1)
//		{
//			return false;
//		}
//	}
//};