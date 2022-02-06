#include <algorithm>
#include <iostream>
#include <type_traits>
using namespace std;

#define REP1(i, n) for (remove_cv<remove_reference<decltype(n)>::type>::type i = 1; i <= (n); i++)

int main()
{
     #ifndef ONLINE_JUDGE
        freopen("input009.txt","r", stdin);
        freopen("output009.txt","w",stdout);
    #endif
  long cc, l, a, n, d;
  cin >> cc;
  while (cc--) {
    cin >> l >> a >> n >> d;
    if (d > a)
      cout << "SAD\n";
    else if (d == 1)
      cout << l*a << endl;
    else {
      long s = -1;
      REP1(i, (n-1)/(d-1)) {
        long x = n-1-(d-1)*i; // extra frequency of A
        if (x+a*i < l) continue;
        long c = (l-x)/i; // number of items >= i
        s = max(s, a*x + (2*a-c+1)*c/2*i + (a-c)*((l-x)%i));
      }
      if (s < 0)
        cout << "SAD\n";
      else
        cout << s << endl;
    }
  }
}
