int query(int i,int l,int r,int ql,int qr){
    if(r < ql || l > qr)  // no overlap
        return 0;
  
    if(ql <= l && r <= qr) // complete overlap
        return segtree[i];
  
    int mid = (l+r)/2;
    int leftAns = query(2*i+1,l,mid,ql,qr);
    int rightAns = query(2*i+2,mid+1,r,ql,qr);
    return leftAns + rightAns;
}
