#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t;
	cin >> t;
	while (t--)
	{
		vector<int> s(10);
		s[0] = 1;
		s[1] = 2;
		for (int i = 2; i < 10; i++)
		{
			s[i] = s[i - 1] + s[i - 2];
		}
		int n, k;
		cin >> n >> k;
		string a = ""; 
		while (k--)
		{
			int w, l, h;
			cin >> w >> l >> h;
			vector<int> Side = {w, l, h};
			sort(Side.begin(), Side.end());
			if (s[n - 1] <= min(Side[0], Side[1]) && s[n - 1] + s[n - 2] <= Side[2])
			{
				a += "1";
			}
			else
			{
				a += "0";
			}
		}
		cout << a << "\n";
	}
	return 0;
}