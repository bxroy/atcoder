#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int h, a; cin >> h >> a;

  int cnt=0;
  while (h>0) {
    h -= a; cnt++;
  }

  cout << cnt << "\n";
  return 0;
}
