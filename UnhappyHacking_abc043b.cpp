#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s; cin >> s;

  string ans="";
  for (char c : s) {
    if (c=='B' && !ans.empty()) ans.pop_back();
    else if (c!='B') ans.push_back(c);
  }
  cout << ans << "\n";
  return 0;
}
