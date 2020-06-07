void init(){
	inv[1]=1;
	for (int i=2; i<MOD; i++) {
		inv[i]=mul(MOD-MOD/i,inv[MOD%i]);
	}
    for(int i=0; i<N; i++) {
		c[i]=1;
		for(int j=0; j<N; j++) if (j!=i) {
			c[i]=mul(c[i],inv[abs(i-j)]);
			if (i<j) c[i]=MOD-c[i];
		}
		c[i]=mul(c[i],f[i]);
	}
}
int lg(int x){
    if (x<N) return f[x];
 	int prod=1;
	for (int i=0; i<N; i++) {
		prod=mul(prod,x-i);
	}
	int ret=0;
	for (int i=0; i<N; i++) {
		ret=(ret+mul(c[i],mul(prod,inv[x - i])))%MOD;
	}
	return ret;
}
