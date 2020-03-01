void init() {
    fac[0] = 1;
    int n = 100000 + 5;
    for(int i = 1; i <= n; i++) fac[i] = (1LL * fac[i - 1] * i) % MOD;
}
