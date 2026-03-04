#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s; cin >> s;

  int cnt=0; int p=s.size();
  for (int i = 0; i < s.size(); i++) {
    int tmp=0;
    char c=s[i];
    for (int j = 1; j < s.size(); j++) {
      if (c==s[j]) tmp++;
    }
    if (tmp>cnt) cnt=tmp;
  }

  int a[p];
  for (int k=0; k<s.size(); k++){
    char h=s[k]; int n=0;
    for (int l=1; l<s.size(); l++){
      if (h==s[l]) n++;
    }
    int m=0;
    if (n==cnt){
      a[m]=h;
      m++;
    }
  }

  auto inarr = [&](char g){
    return find(begin(a), end(a), g) != end(a);
  }
  s.erase(remove_if(s.begin(), s.end(), inarr), s.end());

  cout << s << endl;
  return 0;
}
