void updateTree(int i,int l,int r,int ui,int val){
    if(l==r){
        segtree[i]=val;
        return;
    }
    int mid=(l+r)/2;
    if(ui<=mid){
        updateTree(2*i+1,l,mid,ui,val);
    }else{
        updateTree(2*i+2,mid+1,r,ui,val);
    }
    segtree[i]=segtree[2*i+1]+segtree[2*i+2];
}
