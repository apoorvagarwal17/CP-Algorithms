int bit[1000001];
int sum(int r) {
    int ret = 0;
    while(r>=0) {
        ret += bit[r];
    	r=(r&(r+1))-1;
    }
    return ret;
}
void update(int idx,int n,int change) {
    while(idx<n) {
        bit[idx]+=change;
        idx=(idx|(idx+1));
	}
}