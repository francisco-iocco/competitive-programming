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
      int n; cin >> n;
      vi v(n);
      forn(i,0,n) cin >> v[i];
      int l = 0;
      for (; l < n; l++) if (v[l] < (n-l)) break;
      if (l < n) {
        int f = l;
        for (; f < n; f++) if (v[f] == n-l) break;
        while (l <= f) {
          int aux = v[l];
          v[l] = v[f];
          v[f] = aux;
          f--; l++;
        }
      }
      forn(p,0,n) cout << v[p] << " ";
      cout << '\n';
    }
  }
