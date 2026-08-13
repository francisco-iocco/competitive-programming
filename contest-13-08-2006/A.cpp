#include <bits/stdc++.h>
#define forn(i,l,r) for (int i = l; i < (int) r; i++)
#define MOD (long long)(1e9+7)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pi pair<int, int>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin >> t;
  while (t--) {
    int n, s, x; cin >> n >> s >> x;
    vi v(n);
    forn(i,0,n) cin >> v[i];
    int ac = 0;
    forn(i,0,n) ac += v[i];
    if (s >= ac && (s-ac)%x==0) cout << "YES" << '\n';
    else cout << "NO" << '\n';
  }
}
