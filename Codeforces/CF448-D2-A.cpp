#define _CRT_SECURE_NO_WARNINGS

#include<bits/stdc++.h>

using namespace std;

#define all(v) ((v).begin()),((v).end())
#define allr(v)	     ((v).rbegin()), ((v).rend())
#define sz(v) ((int)(v).size())
#define clr(arr, val)        memset(arr, val, sizeof(arr))
#define JSE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MP(i,j) make_pair(int i,int j);

typedef long long ll;
typedef unsigned long long ull;
typedef  double ld;

const ll OO = (ll)1e18;
const ll mod = (1e9) + 7;
const ld PI = acos(-1.0);
const ld EPS = 1e-8;

int dx[]{-1, -1, -1, 0, 0, 1, 1, 1}; // Dir array
int dy[]{-1, 0, 1, -1, 1, -1, 0, 1}; // Dir array

void file(){
#ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin); //freopen("out.txt", "w", stdout);  
#endif
}
int a[2];
int main()
{
	//cout << setprecision(20) << fixed;
	// negative MOD (a%x+x)%x;
	//file();
	//	freopen("friday.in", "r", stdin);
	///////////
	JSE
		int n;
	int cnt = 0;
	while (cnt < 2)
	{
		for (int i = 0; i < 3; i++)
		{
			int x;
			cin >> x;
			a[cnt] += x;
		}
		cnt++;
	}
	cin >> n;
	a[0] = (a[0] + 4) / 5;
	a[1] = (a[1] + 9) / 10;
	cout << (n >= a[0] + a[1] ? "YES" : "NO") << endl;

		return 0;
}