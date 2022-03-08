#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	string longestCommonPrefix(vector<string> &st)
	{
		int nn = 500, vt = 0;
		for (int i = 0; i < st.size(); i++)
			if (nn > st[i].length())
				nn = st[i].length(), vt = i;
		swap(st[vt], st[0]);
		string res = "";
		// cout << st.size() << endl;
		for (int i = 0; i < nn; i++)
		{
			for (int j = 1; j < st.size(); j++)
			{
				// cout << j << " ";
				if (st[j][i] != st[0][i])
					return res;
			}
			res = res + st[0][i];
		}
		return res;
	}
};
int main()
{
	Solution a;
	vector<string> ab{"flower", "flow", "flight"};
	cout << a.longestCommonPrefix(ab);
}