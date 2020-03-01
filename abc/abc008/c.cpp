#include <iostream>
#include <vector>

using namespace std;
int main()
{
#if 1

  int N, K;
  string s;
  cin >> N >> K >> s;
  vector<int> cnt(26, 0);
  for (char c : s) cnt[c - 'a']++;
  string ans = "";
  int cur = 0;
  vector<int> cnt2(cnt);

  for (int i = 0; i < s.length(); i++) {
    cnt2[s[i] - 'a']--;

    for (int j = 0; j < 26; j++) {
      if (cnt[j] == 0) continue;

      std::puts("");
      std::printf("  [%d]cur: %d\n", __LINE__, cur);
      int tmp = cur + (s[i] - 'a' != j);
      std::printf("  [%d]tmp: %d\n", __LINE__, tmp);
      cnt[j]--;
      std::printf("  cnt[j]: %d, cnt2[s[i] - 'a']: %d\n", cnt[j],
                  cnt2[s[i] - 'a']);
      int tmp2 = 0;
      for (int k = 0; k < 26; k++) {
        std::printf("%c ", 'a' + k);
      }
      std::puts("");
      for (int k = 0; k < 26; k++) {
        std::printf("%d ", cnt[k]);
      }
      std::puts("");
      for (int k = 0; k < 26; k++) {
        std::printf("%d ", cnt2[k]);
      }
      std::puts("");

      for (int k = 0; k < 26; k++) {
        tmp2 += abs(cnt[k] - cnt2[k]);
      }

      std::printf("  tmp2: %d\n", tmp2);
      tmp += tmp2 / 2;
      std::printf("  [%d]tmp: %d, %d\n", __LINE__, tmp, K);
      if (tmp <= K) {
        ans += 'a' + j;
        cur += (s[i] - 'a' != j);
        std::printf("  [%d]ans: %s\n", __LINE__, ans.c_str());
        break;
      }
      cnt[j]++;
    }
  }
  cout << ans << endl;

#if 1
#else
  int n, k;
  std::string s;

  std::printf("calc: %d\n", 0 != 0);
  std::printf("calc: %d\n", 1 != 0);
  std::vector<int> cnt(26, 0);
  for (auto c : s) cnt[c - 'a']++;

  std::string org;
  std::string sorted;
  std::string ans = "";

  std::cin >> n >> k >> org;
  sorted = org;
  std::sort(sorted.begin(), sorted.end());

  std::vector<bool> flg(n);

  for (int i = 0; i < n; i++) {
    char c = org[i];
    int tmp = -1;

    for (int j = n - 1; j >= i + 1; j--) {
      if (k == 0 && !(flg[i] && flg[j])) continue;
      if (k == 1 && !(flg[i] || flg[j])) continue;

      if (c > org[j]) {
        c = org[j];
        tmp = j;
      } else if (c == org[j] && org[i] != org[j] && flg[j]) {
        tmp = j;
      }

      if (tmp == -1) continue;
      if (!flg[i]) k--;
      if (!flg[tmp]) k--;

      flg[i] = flg[tmp] = true;
      std::swap(org[i], org[tmp]);
    }
  }
#endif
#else
  k /= 2;

  if (k == org.size() / 2) {
    ans = sorted;

  } else {
    ans = org;
    for (int i; i < org.size(); i++) {
      if ((org[i] - sorted[i]) <= 0) continue;

      if (k > 0) {
        k--;
        int ni = -1;
        for (int j = sorted.size() - 1; j > 0; j--) {
          if (sorted[j] == org[i]) {
            ni = j;
            break;
          }
        }
        ans[i] = sorted[i];
        ans[ni] = org[i];
      }
    }
  }
#endif

  //  std::puts(org.c_str());
  return 0;
}
