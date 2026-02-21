#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k; cin >> n >> k;
  int cnt=0;
  for (int i = 0; i <= n; i++) {
    int s = i, val=0;
    while (s!=0) {
      val += (s%10);
      s /= 10;
    }
    if (val==k) cnt++;
  }
  cout << cnt << endl;
  return 0;
}
