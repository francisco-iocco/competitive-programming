#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define REP(i,a,b) for (int i = a; i < b; i++)

int main() {
    string word, res="";
    cin>>word;
    REP(i, 0, word.size()) {
        if(res.size()==0&&word[i]=='T') {
            res+='T';
        }
        if(res.size()!=0) {
            if(res[res.size()-1]=='T'&&word[i]=='A') {
                res+='A';
            }
            if(res[res.size()-1]=='A'&word[i]=='P') {
                res+='P';
            }
        }
    }
    cout << (res=="TAP"?"S":"N");
}