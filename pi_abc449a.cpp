#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  double d; cin >> d; 
  double ans = M_PI * d * d / 4.0;
  cout << fixed << setprecision(10) << ans << "\n";
  return 0;
}
