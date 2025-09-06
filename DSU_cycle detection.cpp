#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int find(int i,vector<int>&parent){
        if(parent[i]==i){
            return i;
        }
        return parent[i]=find(parent[i],parent);
    }
    void uniond(int i,int j,vector<int>&parent,vector<int>&rank){
        int parenti=find(i,parent);
        int parentj=find(j,parent);
        if(rank[parenti]>rank[parentj]){
            parent[parentj]=parenti;    
        }else if(rank[parenti]<rank[parentj]){
            parent[parenti]=parentj;
        }else{
            parent[parentj]=parenti;
            rank[parenti]++;
        }
    }
    // Function to detect cycle using DSU in an undirected graph.
    int detectCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int> parent(V);
        vector<int> rank(V,0);
        for(int i=0;i<V;i++){
            parent[i]=i;
        }
        for(int i=0;i<V;i++){
            for(int j:adj[i]){
                if(i<j){
                    int a=find(i,parent);
                    int b=find(j,parent);
                    if(a==b){
                        return true;
                    }
                    uniond(i,j,parent,rank);
                }
            }
        }
        return false;
        
    }
};
