inline ull mul(ull a, ull b, ull m){
        ull add = 0;
        if(a == 0 || b == 0)
        return 0;
        while(a > 1){
            add = (add + a%2*b)%m;
            b = (b*2)%m;
            a /= 2;
        }
        return (b + add)%m;
}
