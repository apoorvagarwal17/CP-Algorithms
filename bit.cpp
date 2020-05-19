#include<bits/stdc++.h>
#define ll         long long
#define fl(i,n)    for(i=0;i<n;i++)
#define fld(i,a,b) for(i=a;i>b;i--)
#define fli(i,a,n) for(i=a;i<n;i++)
#define pb         push_back
#define mp         make_pair
#define F          first 
#define S          second
#define mod        998244353
#define all(x)     x.begin(),x.end()    
#define speedup    ios_base::sync_with_stdio(false),cin.tie(0)
using namespace std;
int bit[1000001];
int counter=0;
int sum(int r) {
    int ret = 0;
    while(r>=0) {
    	counter++;
        ret += bit[r];
    	r=(r&(r+1))-1;
    }
    return ret;
}
void update(int idx,int n,int change) {
    while(idx<n) {
    	counter++;
        bit[idx]+=change;
        idx=(idx|(idx+1));
	}
}