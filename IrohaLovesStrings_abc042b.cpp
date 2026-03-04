#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, l; cin >> n >> l;

  string arr[n]; string s="";
  for (int i = 0; i < n; i++) {
    string now;
    cin >> now;
    if (now[0]>s[0]) s = s + now;
    else s = now + s;
  }

  cout << s << endl;
  return 0;
}
