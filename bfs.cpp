vector<int>v1[1000001];
bool vis[1000001];
ll parent[1000001];
void bfs(int root) {
 	queue<int>q1;
	q1.push(root);
	vis[root]=1;
	while(!q1.empty()) {
		int temp=q1.front();
		q1.pop();
		for(int i=0;i<v1[temp].size();i++) {
			if(vis[v1[temp][i]]==0) {
				vis[v1[temp][i]]=1;
				parent[v1[temp][i]]=temp;
				q1.push(v1[temp][i]);
			}	
		}
	}
}