int main(){
    fast;
    int t;
    cin >> t;
    l:
    while(t--){
        int n;
        cin >> n;
        int a[n];
        vector<int>ls(n,-1);
        vector<int>rs(n,n);
        for(int i=0; i<n; i++) cin >> a[i];
        stack<int>s;
        for(int i=0; i<n; i++){
            while(!s.empty() and a[s.top()]>a[i]){
                rs[s.top()] = i;
                s.pop();
            }
            if(!s.empty()){
                if(a[s.top()]==a[i]) ls[i] = ls[s.top()];
                else ls[i] = s.top();
            }
            s.push(i);
        }
        for(int i=0; i<n; i++) cout << ls[i] << " ";
        cout << nl;
    }

}
