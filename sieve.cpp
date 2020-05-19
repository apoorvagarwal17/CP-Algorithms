int arr[1000001];
void sieve() {
	for(int i=2;i<=1000000;i++) {
		if(a[i]==0) {
			for(int j=i*2;j<=1000000;j+=i) {
				a[j]=1;
			}
		}
	}
}