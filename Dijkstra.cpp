#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pi pair<int,ll>
#define pb push_back
typedef pair<ll,int> ip;


vector<ll>ans;
vector<int>parent;


void dijkstra(vector<pair<int,ll> >g[], int n, int s){
    vector<bool>vis(n,0);
    vector<ll> dis(n,1000000000000);
    vector<int> p(n,-1);
    priority_queue<ip, vector<ip>, greater<ip> > q;
    q.push({0,s});
    dis[s] = 0;

    while(!q.empty()){
        int u = q.top().second;
        q.pop();
        if(vis[u]) continue;
        vis[u] = 1;
        for(auto x : g[u]){
            int v = x.first;
            ll w = x.second;
            if(dis[v]> dis[u] + w){
                dis[v] = dis[u] + w;
                p[v] = u;
                q.push({dis[v], v});
            }
        }
    }
    ans = dis;
    parent = p;
}

void printPath(int d){
    if(ans[d-1]==1000000000000){
        cout << -1 << endl;
    }
    else{
        int cur = d;
        stack<int>path;
        path.push(cur);
        while(parent[cur]!=-1){
            cur = parent[cur];
            path.push(cur);
        }
        while(!path.empty()){
            cout << path.top()+1 << " ";
            path.pop();
        }
    }
}

int main(){
    int t = 1;
    //cin >> t;
    for(int cs=0; cs<t; cs++){
        int n, m;
        cin >> n >> m;
        vector<pi>g[n];
        for(int i=0; i<m; i++){
            int x, y;
            ll z;
            cin >> x >> y >> z;
            x--;
            y--;
            g[x].pb({y,z});
            g[y].pb({x,z});
        }
        int s = 0;

        dijkstra(g,n,s);

        printPath(n-1);
    }
}
