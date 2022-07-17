#include <bits/stdc++.h>
using namespace std;   

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // User input 
    int t; cin>>t; vector<int> v(t);
    for(int i=0;i<t;i++)  cin>>v[i];
    
    
    // DP
    vector<int> dp1(t,1);    // left to right
    int ans = 1;            // First position is 1
    for (int i = 1; i < t; ++i) {
		if (v[i - 1] < v[i]) dp1[i] = dp1[i - 1] + 1; //Compare the previous position with the current position
		// else dp1[1] = 1, Case base - initialized
		ans = max(ans, dp1[i]);
	}
    
    
    vector<int> dp2(t,1);    // right to left 
    for (int i = t-2; i >=0; --i) {
		if (v[i] < v[i+1]) dp2[i] = dp2[i + 1] + 1; // We check the previous solution
	}
	
	// Check the vectors: 
    //for(auto it: dp1) cout<<it<<" "; cout<<endl;
    //for(auto it: dp2) cout<<it<<" "; cout<<endl;
    
    // Now, we remove an element and compare it to the maximum length we found above.
    
    for (int i=1; i<t; ++i)
        {
            if(i-1>=0 && i+1<t)
                {
                    if(v[i-1] < v[i+1])
                    ans = max(ans, dp1[i-1] + dp2[i+1]);
                }
            
        }
        
    cout<<ans<<endl;
	
	return 0;
}
