#include <iostream>

using lint = long long;
const lint MOD = 1e9 + 7;

lint
pow(int a, int b) {
    lint ans = 1;
    for (int i = 0; i < b; i++) {
        ans *= a;
    }
    return ans;
}

lint
fact(int a) {
    lint ans = 1;
    for (int i=0; i < a; i++) {
        ans *= i;
    }
    return ans;
}

lint
comb(int a, int b) {
    if (a < b) return 0;
    if (( a< 0) || (b < 0)) return 0;
    return fact(a) / fact(a - b);
}

const int SZ=100000;
lint inv[2 * SZ + 1], fac[2 * SZ + 1], finv[2 * SZ + 1];

int
main(int argc, char** argv) {

    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;

    for (int i =2; i < 2 * SZ; i++) {
        inv[i] = MOD - inv[MOD%i] * (MOD/ i)%MOD;
        fac[i] = fac[i-1] * (lint)i %MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }

    for (int i =0; i < 100; i++) {
        std::printf("%d : %lld, %lld, %lld\n", i, inv[i], fac[i], finv[i]);
    }

    //int N, A, B, C;
    //std::cin >> N >> A >> B >> C;

    //lint ans = 0;
    //for (int M = N; M < 2 * N - 1; M++) {
    //    ans += M * comb(M - 1, N - 1) * (pow(A/100.0, N) * pow(B/100.0, M- N) + pow(A/100.0, M-N) * pow(B/100.0, N));
    //}

    //std::printf("%lld\n",ans);
    return 0;
}

