#include<bits/stdc++.h>
#define ll         long long
#define fl(i,n)    for(i=0;i<n;i++)
#define fld(i,a,b) for(i=a;i>b;i--)
#define fli(i,a,n) for(i=a;i<n;i++)
#define inp(i,a,n) for(i=0;i<n;i++) {cin>>a[i];}
#define op(i,a,n)  for(i=0;i<n;i++) {cout<<a[i]<<" ";}
#define pb         push_back
#define mp         make_pair
#define F          first 
#define S          second
#define mod        998244353
#define all(x)     x.begin(),x.end()    
#define speedup    ios_base::sync_with_stdio(false),cin.tie(0)
vector<int>v1[1000001];
bool vis[1000001];
ll parent[1000001];
void bfs(ll root) {
 	ll i;
	queue<ll>q1;
	q1.push(root);
	vis[root]=1;
	while(!q1.empty()) {
		ll temp=q1.front();
		q1.pop();
		fl(i,v1[temp].size()) {
			if(vis[v1[temp][i]]==0) {
				vis[v1[temp][i]]=1;
				parent[v1[temp][i]]=temp;
				q1.push(v1[temp][i]);
			}	
		}
	}
}