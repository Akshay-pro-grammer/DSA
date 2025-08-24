class Solution {
  public:
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        queue<int> q;
        int count=0;
        vector<vector<int>> adj(V);
        vector<int> indegree(V);
        for(auto &e:edges){
            adj[e[0]].push_back(e[1]);
            indegree[e[1]]++;
        }
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int u=q.front();
            q.pop();
            count++;
            for(int v:adj[u]){
                indegree[v]--;
                if(indegree[v]==0){
                    q.push(v);
                }
            }
        }
        return count!=V;
    }
};
