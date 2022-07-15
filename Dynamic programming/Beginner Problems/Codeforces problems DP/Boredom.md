```c++
#include <bits/stdc++.h>
using namespace std;


int main() {
    
    int t; cin>>t;
    
    vector<long long> v(100000+2,0);
    
    long long n,mayor=-1;
    
    for(long long i=0;i<t;i++)
        {
            cin>>n;
            
            v[n]++;
            mayor = max(mayor,n);
        }
    
    // DP
    vector<long long> dp(mayor+2, 0);
    
    // Base case
    dp[0] = 0;
    dp[1] = v[1];
    
    for(long long i=2;i<=mayor;i++)
        {
            dp[i] = max(dp[i-1], i*v[i] + dp[i-2]);
        }
    
    cout<<dp[mayor]<<endl;
    
    return 0;
    
}
```
