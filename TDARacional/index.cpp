// 28/08/2021

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;

#define vt vector
#define eb emplace_back
#define pb push_back
#define f(i, s, f) for(int i = s; i < f; ++i)
#define fd(i, s, f) for(int i = s; i >= f; --i)
#define r(x, ns) for(auto& x : ns)
#define s(x) int(x.size())
#define be(ns) ns.begin(), ns.end()
#define rbe(ns) ns.rbegin(), ns.rend()
#define gr(type) vt<type>, greater<type>
#define F first
#define S second

const int mVI = 1<<20, mVJ = 1<<10, INF = 0x3f3f3f3f, MOD = 1e9 + 7;
const int MAX = 102;

int main() {
  int t, n1, d1, n2, d2, ans1, ans2;
  char op1, op, op2;
  cin>>t;
  while(t--) {
    ans1 = ans2 = 0;
    cin>>n1>>op1>>d1>>op>>n2>>op2>>d2;
    if(op == '+') ans1 = (n1*d2+n2*d1), ans2 = (d1*d2);
    else if(op == '-') ans1 = n1*d2-n2*d1, ans2 = (d1*d2);
    else if(op == '*') ans1 = n1*n2, ans2 = (d1*d2);
    else ans1 = n1*d2, ans2 = (n2*d1);
    const int mdc = __gcd(abs(ans1), abs(ans2));
    cout<<ans1<<'/'<<ans2<<" = "<<ans1/mdc<<'/'<<ans2/mdc<<'\n';
  }
}
