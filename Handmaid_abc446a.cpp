#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s; cin >> s;
  s[0] = tolower(s[0]);

  string ans = "Of";
  cout << ans+s << endl;
  return 0;
}
