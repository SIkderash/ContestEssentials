    #pragma comment(linker, "/stack:200000000")
    #pragma GCC optimize("Ofast,no-stack-protector")
    #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
    #pragma GCC optimize("unroll-loops")


    # include <bits/stdc++.h>
    # include <iostream>
    # include <cmath>
    # include <algorithm>
    # include <stdio.h>
    # include <cstring>
    # include <string>
    # include <cstdlib>
    # include <vector>
    # include <bitset>
    # include <map>
    # include <queue>
    # include <ctime>
    # include <stack>
    # include <set>
    # include <list>
    //#include <ext/pb_ds/detail/standard_policies.hpp>
    //#include<ext/pb_ds/assoc_container.hpp>
    //#include<ext/pb_ds/tree_policy.hpp>
    //using namespace __gnu_pbds;
    using namespace std;

    #define F               first
    #define S               second
    #define pb              push_back
    #define pp              pop_back()
    #define UB              upper_bound
    #define LB              lower_bound
    #define ui              unsigned int
    #define ll              long long int
    #define ull             unsigned long long int
    #define ld              long double
    #define pii             pair<int,int>
    #define pll             pair<ll,ll>
    #define vi              vector<int>
    #define vll             vector<ll>
    #define vc              vector<char>
    #define vs              vector<string>
    #define vpii            vector<pii>
    #define vpll            vector<pll>
    #define sti             stack<int>
    #define stll            stack<ll>
    #define qi              queue<int>
    #define qll             queue<ll>
    #define sei             set<int>
    #define sell            set<ll>
    #define sec             set<char>
    #define ses             set<string>
    #define pqi             priority_queue<int>
    #define pqgrt           priority_queue<int,vector<int>,greater<int> >
    #define mpii            map<int,int>
    #define mpll            map<ll,ll>
    #define mpsi            map<string,int>
    #define mpis            map<int,string>
    #define mpci            map<char,int>
    #define umpii           unordered_map<int,int>
    #define umpll           unordered_map<ll,ll>
    #define umpsi           unordered_map<string,int>
    #define umpis           unordered_map<int,string>
    #define umpci           unordered_map<char,int>
    #define ump             unordered_map
    #define use             unordered_set
    #define pq              priority_queue

    #define nl                  '\n'
    #define pf                  printf
    #define sfc(a)              scanf("%c",&a)
    #define sfs(a)              scanf("%s",&a)
    #define sfi1(a)             scanf("%d",&a)
    #define sfi2(a,b)           scanf("%d %d",&a,&b)
    #define sfi3(a,b,c)         scanf("%d %d %d",&a,&b,&c)
    #define sfi4(a,b,c,d)       scanf("%d %d %d %d",&a,&b,&c,&d)
    #define sfd1(a)             scanf("%lf",&a)
    #define sfd2(a,b)           scanf("%lf %lf",&a,&b)
    #define sfd3(a,b,c)         scanf("%lf %lf %lf",&a,&b,&c)
    #define sfd4(a,b,c,d)       scanf("%lf %lf %lf %lf",&a,&b,&c,&d)
    #define sfll1(a)            scanf("%lld",&a)
    #define sfll2(a,b)          scanf("%lld %lld",&a,&b)
    #define sfll3(a,b,c)        scanf("%lld %lld %lld",&a,&b,&c)
    #define sfll4(a,b,c,d)      scanf("%lld %lld %lld %lld",&a,&b,&c,&d)
    #define sfull1(a)           scanf("%llu",&a)
    #define sfull2(a,b)         scanf("%llu %llu",&a,&b)
    #define sfull3(a,b,c)       scanf("%llu %llu %llu",&a,&b,&c)
    #define sfull4(a,b,c,d)     scanf("%llu %llu %llu %llu",&a,&b,&c,&d)

    #define ang(a, b, c)        acos((b*b+c*c-a*a)/(2.0*b*c))
    #define dist(x1,y1,x2,y2)   sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))
    #define rev(v)              reverse(v.begin(),v.end())
    #define srt(v)              sort(v.begin(),v.end())
    #define grtsrt(v)           sort(v.begin(),v.end(),greater<pll>())
    #define all(v)              v.begin(),v.end()
    #define minv(v)             *min_element(v.begin(),v.end())
    #define maxv(v)             *max_element(v.begin(),v.end())
    #define cntv(v,a)           count(v.begin(),v.end(),a)
    #define one(x)              __builtin_popcount(x)
    #define valid(tx,ty)        tx>=0&&tx<r&&ty>=0&&ty<c
    #define mem(arr,val)        memset(arr,val,sizeof(arr))
    #define Unique(x)           x.erase(unique(x.begin(),x.end()),x.end())
    #define fast                ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
    #define forstl(it,v)        for(__typeof(v.begin()) it=v.begin();it!=v.end();++it)
    #define loop(i,n)           for(int i=0;i<n;i++)
    #define loop1(i,n)          for(int i=1;i<=n;i++)
    #define case_print          printf("Case %d: ",cs)

    template <class T1> void deb(T1 e1){cout<<e1<<endl;}
    template <class T1,class T2> void deb(T1 e1,T2 e2){cout<<e1<<" "<<e2<<endl;}
    template <class T1,class T2,class T3> void deb(T1 e1,T2 e2,T3 e3){cout<<e1<<" "<<e2<<" "<<e3<<endl;}
    template <class T1,class T2,class T3,class T4> void deb(T1 e1,T2 e2,T3 e3,T4 e4){cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<endl;}
    template <class T1,class T2,class T3,class T4,class T5> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5){cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<endl;}
    template <class T1,class T2,class T3,class T4,class T5,class T6> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5,T6 e6){cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<" "<<e6<<endl;}

    template <typename T> T gcd(T a, T b){while (b){T t = a % b;a = b;b = t;}return a;}
    template <typename T> T lcm(T a, T b){return a / gcd(a, b) * b;}
    template <typename T> T gcd(T a, T b, T c){return gcd(gcd(a, b), c);}
    template <typename T> bool isPrime(T x){if (x<=4||x%2==0||x%3==0)return x == 2 || x == 3;for (T i = 5; i * i <= x; i += 6) if (x % i == 0 || x % (i + 2) == 0) return 0;return 1;}
    template <typename T> bool bitcheck(T p,T pos){return (bool)(p&(1<<pos));}
    template <typename T> T biton(T p,T pos){return p=p|(1<<pos);}
    template <typename T> T bitoff(T p,T pos){return p=p&~(1<<pos);}
    template <typename T> ll toint(T s) {ll p;stringstream ss(s); ss>>p; return p;}
    template <typename T> string tostring(T n) {stringstream ss; ss << n; return ss.str();}
    template <typename T> T POW(T b,T p) {T Ans=1; while(p){if(p&1)Ans=(Ans*b);b=(b*b);p>>=1;}return Ans;}
    template <typename T> T BigMod(T b,T p,T Mod) {T Ans=1; while(p){if(p&1)Ans=(Ans*b)%Mod;b=(b*b)%Mod;p>>=1;}return Ans;}
    template <typename T> T ModInverse(T p,T Mod) {return BigMod(p,Mod-2,Mod);}
    //template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
    //template <typename T> using ordered_set2 = tree<pair <T, string>, null_type, less<pair <T, string>>, rb_tree_tag, tree_order_statistics_node_update>;
    //ll histogram(ll arr[],ll n){ll top,i=0,sum=0,max_area=0;stack<ll>st;st.push(0);while(i<n){if(st.empty()||arr[st.top()]<=arr[i]) st.push(i++);else{top=st.top();st.pop();if(st.empty())sum=arr[top]*i;else sum=arr[top]*(i-st.top()-1);max_area=max(sum,max_area);}}while(!st.empty()){top=st.top();st.pop();if(st.empty()) sum=arr[top]*i;else sum=arr[top]*(i-st.top()-1);max_area=max(sum,max_area);}return max_area;}
    //ll ext_gcd(ll a,ll b,ll *x,ll *y){if(a==0){*x=0;*y=1;return b;}ll x1,y1;ll gcd = ext_gcd(b%a,a,&x1,&y1);*x=y1-(b/a)*x1;*y=x1;return gcd;}

    const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
    const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
    const int mx        = 1e5+10;
    const int inf       = 0x3f3f3f3f;
    ll mod       = 1e9+7;
    const ld PI         = 2*acos(0.0);
    const ld E          = 2.71828182845904523536;
    const ld eps        = 1e-9;
    //ll fact[mx];
    //void factorial(){fact[0]=1;loop1(i,mx-1) fact[i]=(fact[i-1]*i)%mod;}
    //ll nCr(ll n,ll r){return (fact[n]*ModInverse(((ll)fact[n-r]*(ll)fact[r])%mod,(ll)mod))%mod;}
    //bool mark[mx];vector<ll>prime;
    //void sieve(){memset(mark,true,sizeof(mark));for(ll i=3;i<=(ll)sqrt(mx);i+=2){if(mark[i]){for(ll j=i*i;j<=mx;j+=2*i) mark[j]=false;}}prime.push_back(2);for(ll i=3;i<=mx;i+=2) if(mark[i]) prime.push_back(i);}
    ///code start here
    ull n, k, z;
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
    void multiply(ull a[][2], ull b[][2]){
        ull temp[2][2] = {{0,0},{0,0}};
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                for(int k=0; k<2; k++){
                    temp[i][j] += mul(a[i][k],b[k][j],mod);
                }
            }
        }
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                a[i][j] = temp[i][j];
            }
        }
    }
    void matrixExpo(ull a[][2], ull power){
        if(power==0 || power==1) return;
        ull temp[2][2] = {{0,z},{1,z}};
        matrixExpo(a,power/2);
        multiply(a,a);
        if(power&1) multiply(a,temp);
    }
    int main(){
    //    freopen("Input.txt","r",stdin); freopen("Output.txt","w",stdout);
        cin >> n >> k >> mod;
        z = (k-1)%mod;
        ull ans[2][2] = {{0,z},{1,z}};
        matrixExpo(ans,n);
        cout << (ans[0][0]+ans[0][1])%mod << nl;
    }
    /*

    */
