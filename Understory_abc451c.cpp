#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long q; cin >> q;

  vector<long long> v(q);
  long long cnt=0, j=0;
  while (q--) {
    long long a, b; cin >> a >> b;

    if (a==2) {
      for (long long i = 0; i < j; i++) {
        if (v[i]<=b && cnt>0) cnt--;
        else cnt++;
      }
    }else {
      v[j]=b; cnt++;
    }
    cout << cnt << "\n";
    j++;
  }

  return 0;
}
