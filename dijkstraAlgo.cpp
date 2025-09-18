#include<bits/stdc++.h>
class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        vector<vector<pair<int,int>>> adj(V);
        for(auto &e:edges){
            int u=e[0];
            int v=e[1];
            int w=e[2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        vector<int> ans(V,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        ans[src]=0;
        pq.push({0,src});
        while(!pq.empty()){
            auto [dist,node]=pq.top();
            pq.pop();
            for(auto v:adj[node]){
                auto [u,w]=v;
                if(dist+w<ans[u]){
                    ans[u]=dist+w;
                    pq.push({dist+w,u});
                }
            }
        }
        return ans;
    }
};
