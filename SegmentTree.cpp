#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;

#define lc(idx) 2*idx
#define rc(idx) 2*idx+1

const int MAX_N = 200000 + 5;

struct node {
	int lazy;
	int sum;
	int maxi;
	int mini;
};

int a[MAX_N];
node tree[MAX_N * 4];
int n;

node merge(node a, node b) {
	return { 0, a.sum + b.sum, max(a.maxi, b.maxi), min(a.mini, b.mini) };
}

void relax(int idx, int L, int R) {
	tree[idx].sum += tree[idx].lazy;
	tree[idx].lazy = 0;

	if (L != R) {
		tree[lc(idx)].lazy += tree[idx].lazy;
		tree[rc(idx)].lazy += tree[idx].lazy;
	}
}


void build(int idx, int L, int R) {
	if (L == R) {
		tree[idx] = { 0, a[L], a[L], a[L]};
		return;
	}

	int M = (L+ R) / 2;
	build(lc(idx), L, M);
	build(rc(idx), M + 1, R);
	tree[idx] = merge(tree[lc(idx)], tree[rc(idx)]);
}

void rangeUpdate(int idx, int L, int R, int l, int r, int lazy) {
	relax(L, R, idx);
	if (L > r or R < l) return ;
	if (L >= l && R <= r) {
		tree[idx].lazy += lazy;
		relax(L, R, idx);
		return;
	}

	int M = (L + R) / 2;

	rangeUpdate(L, M, lc(idx), l, r, lazy);
	rangeUpdate(M + 1, R, rc(idx), l, r, lazy);

	tree[idx] = merge(tree[lc(idx)], tree[rc(idx)]);
}

node rangeQuery(int idx, int L, int R, int l, int r) {
	relax(idx, L, R);
	if (L > r or R < l) return {0, 0, INT_MIN, INT_MAX};
	if (L >= l and r <= R) {
		return tree[idx];
	}

	int M = (L + R) / 2;
	tree[idx] =  merge(rangeQuery(lc(idx), L, M, l, r), 
		rangeQuery(rc(idx), M + 1, R, l, r));
	return tree[idx];
}
