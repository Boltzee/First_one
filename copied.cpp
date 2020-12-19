#include <bits/stdc++.h>

#define ff(i, n) for (int i = 0; i < int(n); i++)
#define all(a) (a).begin(), (a).end()
#define size(a) int((a).size())
#define pb(a) push_back(a)
#define mp(x, y) make_pair((x), (y))
#define x first
#define y second

using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;

const int N = 1010;

int n, m;
char a[N][N];

inline bool read() {
	if (!(cin >> n >> m)) return false;
	ff(i, n) assert(scanf("%s", a[i]) == 1);
	return true;
}

int size[N * N];
int tt, num[N][N];

int X[] = { -1, 0, 1, 0 };
int Y[] = { 0, -1, 0, 1 };

void dfs(int x, int y) {
	size[tt]++;
	num[x][y] = tt;

	ff(i, 4) {
		int xx = x + X[i];
		int yy = y + Y[i];
		if (min(xx, yy) < 0 || xx >= n || yy >= m) continue;
		if (num[xx][yy] != -1 || a[xx][yy] != '.') continue;
		dfs(xx, yy);
	}
}

char ans[N][N];

inline void solve() {
	tt = 0;
	ff(i, n) ff(j, m) num[i][j] = -1;

	ff(i, n)
		ff(j, m)
			if (num[i][j] == -1 && a[i][j] == '.') {
				size[tt] = 0;
				dfs(i, j);
				tt++;
			}

#ifdef SU1
	ff(i, n) {
		ff(j, m) cerr << num[i][j] << ' ';
		cerr << endl;
	}
#endif

	ff(i, n)
		ff(j, m) {
			if (a[i][j] == '.') {
				ans[i][j] = '.';
				continue;
			}
			int cur[4] = { -1, -1, -1, -1 };
			ff(k, 4) {
				int x = i + X[k];
				int y = j + Y[k];
				if (min(x, y) < 0 || x >= n || y >= m) continue;
				if (a[x][y] != '.') continue;
				cur[k] = num[x][y];
			}
			sort(cur, cur + 4);
			int sizecur = int(unique(cur, cur + 4) - cur);
			int ans = 1;
			ff(k, sizecur)
				if (cur[k] != -1)
					ans += size[cur[k]];
			ans %= 10;
			::ans[i][j] = char('0' + ans);
		}

	ff(i, n) puts(ans[i]);
}

int main() {
#ifdef SU1
    assert(freopen("input.txt", "rt", stdin));
    //assert(freopen("output.txt", "wt", stdout));
#endif
    
    cout << setprecision(10) << fixed;
    cerr << setprecision(5) << fixed;

    while (read()) {
		solve();
		//break;
	}
	
    return 0;
}