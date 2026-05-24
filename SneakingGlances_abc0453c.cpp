#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  double n; cin >> n;
  double cnt=0, pass=0.5;
  while (n--) {
    double l; cin >> l;
    if (pass<0){
      pass += l;
      if (pass>0) cnt++;
    }else {
      pass -= l;
      if (pass<0) cnt++;
    }
  }
  cout << cnt << "\n";
  return 0;
}
