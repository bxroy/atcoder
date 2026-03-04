#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  float n, m; cin >> n >> m;

  n -= 2; m -=2;
  if ((n/2)>m) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}
