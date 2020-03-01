#if 1
#include <iostream>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

ll g1(ll n, int p)
{
  if (n == 0) return 0;
  return n / p + g1(n / p, p);
}
ll g2(ll n, int p)
{
  if (n % 2 == 1) {
    return g1(n, p) - g2(n - 1, p);
  }
  ll res = g1(n / 2, p);
  if (p == 2) res += n / 2;
  return res;
}

int main()
{
  ll n;
  cin >> n;
  ll ans = min(g2(n, 2), g2(n, 5));
  cout << ans << endl;
  return 0;
}

#else

#include <iostream>

int main(int argc, char ** argv)
{
  long long n;
  std::cin >> n;

  long long ans = 0;

  if ((n & 0x01) == 1) {
    std::printf("%lld\n", ans);
  } else {
#if 1
    long long t = 0;
    for (long long d = 10; d <= n; d *= 5) {
      ans += n / d;
    }
#else
    long long t = n;
    while (t >= 1) {
      t /= 5;
      ans += t;
    }
#endif

    std::printf("%lld\n", ans);
  }
  return 0;
}
#endif
