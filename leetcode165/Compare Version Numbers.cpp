class Solution {
public:
	int compareVersion(string version1, string version2) {
		vector<int> iver1;
		vector<int> iver2;

		auto siter1a = version1.begin();
		auto siter1b = version1.begin();

		auto siter2a = version2.begin();
		auto siter2b = version2.begin();

		string tmp = { "0" };

		while (siter1b != version1.end())
		{
			if (siter1a == version1.end())
			{
				tmp.assign(siter1b, siter1a);
				iver1.push_back(stoi(tmp));
				siter1b = siter1a;
				break;
			}
			if (*siter1a == '.')
			{
				tmp.assign(siter1b, siter1a);
				iver1.push_back(stoi(tmp));
				siter1a++;
				siter1b = siter1a;
			}
			else
			{
				siter1a++;
			}
		}

		while (siter2b != version2.end())
		{
			if (siter2a == version2.end())
			{
				tmp.assign(siter2b, siter2a);
				iver2.push_back(stoi(tmp));
				siter2b = siter2a;
				break;
			}
			if (*siter2a == '.')
			{
				tmp.assign(siter2b, siter2a);
				iver2.push_back(stoi(tmp));
				siter2a++;
				siter2b = siter2a;
			}
			else
			{
				siter2a++;
			}
		}

		if (iver1.size() > iver2.size())
			iver2.insert(iver2.end(), iver1.size() - iver2.size(), 0);
		if (iver1.size() < iver2.size())
			iver1.insert(iver1.end(), iver2.size() - iver1.size(), 0);


		for (auto i = 0; i < iver1.size(); i++)
		{
			if (iver1[i] > iver2[i])
				return 1;
			else if (iver1[i] < iver2[i])
				return -1;
		}
		return 0;
	}
};