#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	set<int>f, s;
    map<int, int>mp,mpv;
	for(int i =  1; i <= n; i++)
	{
		int a, b;
		cin >> a >> b;
		f.insert(a);
		s.insert(b);
        //mpv[a] = b;
        mp[b]++;
        //cout << mp[b] << endl;
        int sz = f.size();
		if(f.size() < n)
		{
            if(i == n)
            {
                cout << s.size() << endl;
            }
			else if(sz < i)
			{
                if(mp[b] > 1 && mp[a] == b)
                {
                    cout << s.size() + 1 << endl;
                }
                else{
                    cout << s.size() << endl;
                }
			}
			else{
				cout << s.size() + 1 << endl;
			}
		}
        mpv[a] = b;
	}
}