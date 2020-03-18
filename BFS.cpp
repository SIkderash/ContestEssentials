#include <bits/stdc++.h>
using namespace std;
vector <int> g[100000+7] ;   // vector for maintaining adjacency list explained above.
int level[100000+7]; // to determine the level of each node
bool vis[100000+7]; //mark the node if visited
void bfs(int s) {
    queue <int> q;
    q.push(s);
    level[ s ] = 0 ;  //setting the level of sources node as 0.
    vis[ s ] = true;
    while(!q.empty())
    {
        int p = q.front();
        q.pop();
        for(int i = 0;i < g[ p ].size() ; i++)
        {
            if(vis[ g[ p ][ i ] ] == false)
            {
        //setting the level of each node with an increment in the level of parent node
                level[ g[ p ][ i ] ] = level[ p ]+1;
                 q.push(g[ p ][ i ]);
                 vis[ g[ p ][ i ] ] = true;
            }
        }
    }
}
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n,m;
	cin >> n >> m ;
	for(int i = 0; i < m; i++){
		int v, u;
		cin >> v >> u;
		v--, u--;
		g[v].push_back(u);
		g[u].push_back(v);
	}
	int cc = 0;
	bfs(0);
}
