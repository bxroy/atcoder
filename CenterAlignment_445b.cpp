#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;

  vector<string> v(n);
  int m=0;
  
  for (int k=0; k<n; k++){
    string s; cin >> s;
    v[k]=s;
    if (s.size()>m) m=s.size();
  }

  for (int j=0; j<n; j++){
    while (v[j].size()<m) {
      char dot = '.';

      v[j] = dot + v[j];
      v[j] = v[j] + dot;
    }
  }

  for (int l=0; l<n; l++) cout << v[l] << endl;
  return 0;
}
