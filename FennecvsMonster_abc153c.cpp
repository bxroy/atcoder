#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k; cin >> n >> k;

  vector<int> v(n);
  for (auto &x : v) cin >> x;

  sort(v.begin(), v.end(), greater<int>());
  for (int i=0; i<=k; i++){
    v[i]=0;
  }

  int ans = accumulate(v.begin(), v.end(), 0);
  cout << ans << "\n";

  return 0;
}
