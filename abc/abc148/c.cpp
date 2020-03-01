#include <iostream>

long long gcd(long long a, long long b) { return (b > 0) ? gcd(b, a % b) : a; }
long long lcm(long long a, long long b) { return a / gcd(a, b) * b; }

int main(int argc, char ** argv)
{
  int a, b;
  std::cin >> a >> b;
  std::printf("%lld\n", lcm(a, b));
  return 0;
}
