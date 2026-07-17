#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define REP(i,a,b) for (int i = a; i < b; i++)

int main() {
  int n,x,y,minX,minY,maxX,maxY;
  cin >> n;
  REP(i, 0, n) {
    cin >> x >> y;
    if(i==0) {
        minX=x;
        maxX=x;
        minY=y;
        maxY=y;
    } else {
        maxX = max(x, maxX);
        minX = min(x, minX);
        maxY = max(y, maxY);
        minY = min(y, minY);
    }
  }
  cout << (maxX-minX)*2+(maxY-minY)*2+8;
}