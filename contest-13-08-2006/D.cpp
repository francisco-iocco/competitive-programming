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
    int n; 
    cin >> n;
    
    vector<ll> a(n), b(n), sums(n);
    forn(i, 0, n) cin >> a[i];
    forn(i, 0, n) cin >> b[i];
    
    ll ac = 0;
    forn(i, 0, n) {
      ac += b[i];
      sums[i] = ac;
    }
    sort(a.begin(), a.end());
    ll ans = 0;
    forn(i, 0, n) {
      ll cant = n - i;
      ll punt = upper_bound(sums.begin(), sums.end(), cant) - sums.begin(); 
      if (punt * a[i] > ans) ans = punt * a[i];
    }
    
    cout << ans << '\n';
  }
}
