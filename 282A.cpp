#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define y1 y1234567890
#define en '\n'

#define NAME ""
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define file_io freopen(NAME".in", "r", stdin); freopen(NAME".out", "w", stdout)

const int N = 1e5;
const int M = N + 7;
const double EPS = 1e-10;

const int MOD = 1e9 + 7;
const ll INF = 1e18 + 17;

void solve() {	
    int n;
    cin >> n;
    string s;
    int x = 0;
    for(int i = 0; i < n;i++) {
        cin >> s;
        if(s[1] == '+') x++;
        if(s[1] == '-') x--;
    }
    cout << x;
}

int main() {
	fast_io;
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    solve();
    cout << en;
  }
  return 0;
}