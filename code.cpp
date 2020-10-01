#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
	int n;
	cin >> n;
	int a[n], o = 0, e = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] % 2)
		{
			o++;
		}
		else
		{
			e++;
		}
	}
	if (o % 2 == 0)
	{
		cout << e << "\n";
	}
	else
	{
		cout << o << "\n";
	}
	return 0;
}