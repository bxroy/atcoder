#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k; cin >> n >> k;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int mx= *max_element(v.begin(), v.end());
  int mn= *min_element(v.begin(), v.end());

  int frs=0, scn=0;

  cout << frs << " " << scn << endl;
  return 0;
}
