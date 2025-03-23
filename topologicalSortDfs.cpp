#include <stack>
class Solution {
  public:
  void dfs(vector<vector<int>>& adj,stack<int> &st,int u,vector<bool> &vis){
      vis[u]=true;
      for(auto &v:adj[u]){
          if(!vis[v])
            dfs(adj,st,v,vis) ; 
      }
      st.push(u);
  }
    vector<int> topologicalSort(vector<vector<int>>& adj) {
        vector<bool> vis(adj.size(),false);
        stack<int> st;
      //since it is a directed graph , we need to call for all nodes
        for(int i=0;i<adj.size();i++){
            if(!vis[i])
                dfs(adj,st,i,vis);
        }
        vector<int> res;
        while (!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }
        return res;
    }
};
