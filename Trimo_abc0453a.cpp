#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n; string s; cin >> s;

  int i=0;
  while (i<s.size() && s[i]=='o') {
    i++;
  }
  s.erase(0, i);
  cout << s << "\n";
  return 0;
}
