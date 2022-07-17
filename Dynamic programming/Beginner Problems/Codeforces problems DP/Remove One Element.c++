int t; cin>>t;
    vector<int> v(t);
    for(int i=0;i<t;i++)
        {
            cin>>v[i];
        }
    
    // DP
    vector<int> dp(t,1);
    int ans = 1;
    for (int i = 1; i < t; ++i) {
		if (v[i - 1] < v[i]) dp[i] = dp[i - 1] + 1;
		ans = max(ans, dp[i]);
	}
    
    cout<<ans<<endl;

5
1 2 1 1 4
