#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int cnt = 0;
		if(k == n * n - 1)
		{
			cout << "NO" << endl;
			continue;
		}
		cout << "YES" << endl;
		int v[n][n];
		bool last = false;
		bool f = false;
		for(int i = 0; i < n ; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(cnt < k)
				{
					cout << "U";
				//	v[i][j] = 'U';
					cnt++;
				}
				else if(cnt % n != 0 && !last)
				{
					if(i == n-1)
					{
						cout << "R";
					}
					else {
						cout << "D";
					}
					//cout << "D";
					last = true;
				}
				else if(j == 0)
				{
					cout << "R";
					//f = true;
				}
				else{
					//v[i][j] = 'L';
					cout << "L";
				}
			}
			cout << endl;
		}
		//cout << cnt << endl;
		//cout << endl;
	}
    
}