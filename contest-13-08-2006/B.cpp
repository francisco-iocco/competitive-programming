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
    ll n, q; cin >> n >> q;
    vector<ll> a(n), b(n);
    forn(i,0,n) cin >> a[i];
    forn(i,0,n) cin >> b[i];
    forn(i,0,n) {
      if (b[i] > a[i]) a[i] = b[i];
    }
    for(int i = n-2; i >= 0; i--) {
      if (a[i+1] > a[i]) a[i] = a[i+1];
    }
    vector<ll> prefix(n);
    ll ac = 0;
    forn(i,0,n) {
      ac += a[i];
      prefix[i] = ac;
    }
    forn(i,0,q) {
      int l, r; cin >> l >> r;
      r--; l--;
      cout << prefix[r] - prefix[l] + a[l] << ' ';
    }
    cout << '\n';
  }
}
