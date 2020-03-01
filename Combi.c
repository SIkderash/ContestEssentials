int combi(int k, int n) {
    if (k == n) return 1;
    if (min(n, k) < 0) return 0;
    if (k > n) return 0;
    return (1LL * factorial(n) * power((1LL * factorial(k) * factorial(n - k)) % MOD, MOD - 2)) % MOD;
}
