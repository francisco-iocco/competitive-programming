#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define REP(i,a,b) for (int i = a; i < b; i++)

int main() {
  int a,b,c;
  cin >> a >> b >> c;
  cout << ((b-a)%c==0?"S":"N");
}