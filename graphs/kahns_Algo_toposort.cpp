#include<bits/stdc++.h>
class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        queue<int> q;
        vector<vector<int>> adj(V);
        vector<int> indegree(V);
        for(auto &e:edges){
            adj[e[0]].push_back(e[1]);
            indegree[e[1]]++;
        }
        vector<int> result;
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        
        while(!q.empty()){
            int u=q.front();
            q.pop();
            result.push_back(u);
            for(int i:adj[u]){
                indegree[i]--;
                if(indegree[i]==0){
                    q.push(i);
                }
            }
        }
        return result;
    }
};
