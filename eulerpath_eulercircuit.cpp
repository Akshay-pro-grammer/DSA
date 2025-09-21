/*Given an undirected graph with V nodes, and E edges, with adjacency list adj, return 2 if the graph contains an eulerian circuit, else if the graph contains an eulerian path, return 1, otherwise, return 0.*/
class Solution {
  public:
  void dfs(vector<int> adj[],int s,vector<bool>&vis){
      vis[s]=true;
      for(int i:adj[s]){
          if(!vis[i]){
              dfs(adj,i,vis);
          }
      }
  }
  bool isConnected(int V,vector<int> adj[]){
      int index=-1;
      for(int i=0;i<V;i++){
          if(adj[i].size()!=0){
              index=i;
              break;
          }
      }
      vector<bool> vis(V,false);
      dfs(adj,index,vis);
      for(int i=0;i<V;i++){
          if(vis[i]==false && adj[i].size()>0){
              return false;
          }
      }
      return true;
  }
    int isEulerCircuit(int V, vector<int> adj[]) {
        // Code here
        if(!isConnected(V,adj)){
            return 0;
        }
        int oddindex=0;
        for(int i=0;i<V;i++){
            if(adj[i].size()%2!=0){
                oddindex++;
            }
        }
        if(oddindex>2){
            return 0;
        }
        if(oddindex==2){
            return 1;
        }
        return 2;
    }
};
