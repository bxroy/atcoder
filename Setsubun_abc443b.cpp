#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k; cin >> n >> k;

  int cnt=0, yrs=0;

  if (k==n || n>k){
    cout << 0 << "\n";
  }else {
    while (cnt<=k) {
      n++;
      cnt += n;
      yrs++;
    }
    cout << yrs << "\n";
  }
  return 0;
}
