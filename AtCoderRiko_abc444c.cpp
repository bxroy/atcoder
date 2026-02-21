#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  vector<int> a(n);
  for (auto &x : a) cin >> x;
  sort(a.begin(), a.end());

  int mn = a[0], mx = a[n-1];

  if (mn==mx) cout << mn << endl;
  else {
    if (a[1]+a[n-2]==mn+mx) cout << mn+mx; 
    else cout << mn+mx << " " << mx;
  }
  return 0;
}
