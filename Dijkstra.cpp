#include <bits/stdc++.h>
using namespace std;
vector <pair<int, long long int> >g[100000+7] ;
bool vis[100000+7];
int p[100000+7];
long long int dist[100000+7];
typedef pair<long long int, int> ip;
void bfs (int start)
{

    priority_queue< ip, vector <ip> , greater<ip> > pq;
    dist[ start ] = 0;
    pq.push(make_pair(0, start));
    while( !pq.empty ())
    {
       int u = pq.top().second;
       pq.pop();
       if(vis[u]==1){
        continue;
       }
       vis[u]=1;
       //cout << "pop "<<v+1<<"\n";
       //cout <<g[v].size()<<"\n";
       //cout << dist[ v ] <<"\n";
        for( auto i = 0; i < g[u].size(); ++i)
        {
            //cout << g[v][i].first+1<<" "<<dist[ g[ v ][ i ].first ]<<"\n";

            if(dist[ g[ u ][ i ].first ] > dist[ u ] + g[ u ][ i ].second )
            {

                dist[ g[ u ][ i ].first ] = dist[ u ] + g[ u ][ i ].second;
                p[g[ u ][ i ].first ] = u;
                //cout << "Changed " <<g[v][i].first+1<<" "<<dist[ g[ v ][ i ].first ]<<"\n";
                pq.push(make_pair(dist[ g[ u ][ i ].first ], g[ u ][ i ].first ));

            }
        }

    }
}
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int n,m;
    cin >> n >> m ;
    for(int i = 0; i < m; i++)
    {
        int v, u, w;
        cin >> v >> u >>w;
        v--, u--;
        g[v].push_back(make_pair(u, w));
        g[u].push_back(make_pair(v, w));
    }
    for(int i=0; i<n; i++){
            dist[i]=99999999999999;
            p[i]=-1;
    }
    bfs(0);
    if(vis[n-1]==0){
        cout <<"-1";
        return 0;
    }
    int l = n-1;
    stack<int> a;
    while(p[l]!=0){
        a.push(p[l]);
        l = p[l];
    }
    a.push(0);
    while(!a.empty()){
        cout <<a.top()+1<<" ";
        a.pop();
    }
    cout <<n;
}
