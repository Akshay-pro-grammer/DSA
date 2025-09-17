class Solution {
  public:
    int spanningTree(int V, vector<vector<int>>& edges) {
        vector<vector<pair<int,int>>> adj(V);
        for(auto &vec:edges){
            int u=vec[0];
            int v=vec[1];
            int w=vec[2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<>> pq;
        pq.push({0,0,-1});
        vector<bool> vis(V,false);
        vector<int> parent(V,-1);
        int ans=0;
        while(!pq.empty()){
            auto [w,n,p]=pq.top();
            pq.pop();
          if(vis[n]) continue;
            ans+=w;
            parent[n]=p;
            if(!vis[n]){
                vis[n]=true;
                for(auto [v,w]:adj[n]){
                    if(!vis[v]){
                        pq.push({w,v,n});
                    }
                }
                
            }
        }
        return ans;
    }
};
