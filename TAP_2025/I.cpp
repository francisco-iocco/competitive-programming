#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define REP(i,a,b) for (int i = a; i < b; i++)

int main() {
    int n,m,x,y;
    cin >> n >> m;
    vector<int> v1(n+1);
    vector<int> v2(n);
    REP(i, 0, m) {
        int ones = 0;
        cin >> x >> y;
        REP(j, 0, n) {
            cin>>v2[j];
            if(v2[j]==1) ones++;
        }
        if(floor(x/(ones+1)) >= y) {
            v1[n]+=floor(x/(ones+1));
            REP(j, 0, n) {
                if(v2[j]==1) v1[j]+=floor(x/(ones+1));
            }
        } else {
            v1[n]+=y;
            REP(j, 0, n) {
                if(v2[j]==1) v1[j]+=floor(x/ones);
            }
        }
        REP(j, 0, n) {
            if(v2[j]==2) v1[j]+=y;
        }
    }
    REP(i, 0, n+1) {
        cout << v1[i] << " ";
    }
}