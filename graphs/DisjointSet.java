class DisjointSet{
  int [] rank;
  int [] parent;
  public DisjointSet(int n){
    rank = new int[n+1];
    parent=new int[n+1];
    for(int i=0;i<=n;i++){
      parent[i]=i;
    }
  }
  int findUPar(int node){
    if(node==parent[node]){
      return node;
    }
    return parent[node]=findUPar(parent[node]);
  }
  void unionByRank(int u,int v){
    int ulp_u=findUPar(u);
    int ulp_v=findUPar(v);
    if(ulp_u==ulp_v){
      return;
    }
    if(rank[ulp_u]<rank[ulp_v]){
      parent[ulp_u]=ulp_v;
    }
    else if(rank[ulp_u]>rank[ulp_v]){
      parent[ulp_v]=ulp_u;
  }
  else{
    parent[ulp_v]=ulp_u;
    rank[ulp_u]++;
  }
}
}
