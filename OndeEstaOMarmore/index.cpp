// 12/07/2021

#include <bits/stdc++.h>
using namespace std;

#define vt vector
typedef pair<int, int> ii;
typedef long long ll;
typedef vt<int> vi;
typedef vt<vt<int>> vvi;
typedef vt<string> vs;
typedef vt<ii> vii;

#define _outputConfig(a) if(a) ios::sync_with_stdio(0);cin.tie(0)
#define _fixAll(x) if(x >= 0) cout.precision(x);cout.setf(ios::fixed)
#define eb emplace_back
#define pb push_back
#define f(a, b, c) for(int a = b; a < c; ++a)
#define fd(a, b, c) for(int a = b; a >= c; --a)
#define w(a) while(a--)
#define s(a) int(a.size())
#define l(a) a.length()
#define be(ns) ns.begin(), ns.end()
#define rbe(ns) ns.rbegin(), ns.rend()
#define F first
#define S second
#define mdc(a, b) __gcd(a, b)

const int MAX = 1e3 + 2, mVI = 1<<20, mVJ = 1<<10, mVZ = 105;
const int INF = 0x3f3f3f3f, OUT = -INF, OUT2 = -1, MOD = 1e9 + 7;

int n, m, x, ct = 0;
vi ns;

int main() {_outputConfig(0);_fixAll(0);

  while(cin>>n>>m&&n&&m) {
    cout<<"CASE# "<<++ct<<":\n";
    ns = vi(n);
    f(i,0,n) cin>>ns[i];
    sort(be(ns));
    f(i,0,m) {
      cin>>x;
      auto low = lower_bound(be(ns), x) - ns.begin();
      if(low < n && x == ns[low]) cout<<x<<" found at "<<low+1<<'\n';
      else cout<<x<<" not found\n";
    }
  }

return 0;}
