#include <bits/stdc++.h>
using namespace std;

vector<int> parent, sz;

int find(int v) {
    if (parent[v] == v) return v;
    return parent[v] = find(parent[v]); // path compression
}

void unionBySize(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) {
        if (sz[a] < sz[b]) {
          parent[a]=b;
          sz[b]+=sz[a];
        }else if(sz[a] > sz[b]){
         parent[b]=a;
          sz[a]+=sz[b];
        }else{
         parent[b]=a;
          sz[a]+=sz[b];
        }
    }
}

int main() {
    parent.resize(n + 1);
    sz.assign(n + 1, 1);

    // initialize
    for (int i = 1; i <= n; i++) parent[i] = i;
    return 0;
}
