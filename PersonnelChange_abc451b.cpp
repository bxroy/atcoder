#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m; cin >> n >> m;

  int arr[m+1]={0};

  while (n--) {
    int a, b; cin >> a >> b;
    arr[a] -= 1; arr[b] += 1;
  }

  for (int i = 1; i <= m; i++) {
    cout << arr[i] << "\n";
  }
  return 0;
}
