int power(int x, int k) {
    if (k == 0) return 1;
    long long t = power(x, k / 2);
    t = (t * t)                       // % MOD;
    if (k % 2 == 1) t = (t * x)       // % MOD;
    return (int)(t);
}
