#include <bits/stdc++.h> 
using namespace std;
 
int main() { 
  int n; 
  cin >> n; 
  vector<int> score(n); 
  vector<int> up(n, 1); 
  vector<int> down(n, 1); 

  for (int i = 0; i < n; i++) { 
    cin >> score[i]; 
  } 
 
  for (int i = 1; i < n; i++) { 
    if (score[i] > score[i - 1]) { 
      up[i] = up[i - 1] + 1; 
    } 
 
    if (score[n - i - 1] > score[n - i]) { 
      down[n - i - 1] = down[n - i] + 1; 
    } 
  } 
 
  long long int ans = 0; 
  for (int i = 0; i < n; i++) { 
    ans += max(up[i], down[i]); 
  } 
 
  cout << ans; 
 
  return 0; 
}