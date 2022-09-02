   vpii maxFinder(vector<int>a){
        int n = a.size();
        vpii ans(n+1);
        for(int i=0; i<=n-1; i++){
            ans[i].F = 0;
            ans[i].S = n;
        }
        stack<int>s;
        for(int i=1; i<=n-1; i++){
            while(!s.empty() and a[s.top()]<a[i]){
                ans[s.top()].S = i;
                s.pop();
            }
            if(!s.empty()){
                if(a[s.top()]==a[i]) ans[i].F = ans[s.top()].F;
                else ans[i].F = s.top();
            }
            s.push(i);
        }
        return ans;
    }
   
