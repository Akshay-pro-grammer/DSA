void buildTree(int i,int l,int r){
    if(l==r){
        segtree[i]=nums[r];
        return;
    }
    int mid=(l+r)/2;
    buildTree(2*i+1,l,mid);
    buildTree(2*i+2,mid+1,r);
    segtree[i]=segtree[2*i+1]+segtree[2*i+2];
}
/*
--------------------------------------------
| Query     | Leaf Value | Merge Function  |
| --------- | ---------- | --------------- |
| Range Sum | arr[i]     | left + right    |
| Range Min | arr[i]     | min(left,right) |
| Range Max | arr[i]     | max(left,right) |
| Range GCD | arr[i]     | gcd(left,right) |
| Range XOR | arr[i]     | left ^ right    |
| Range AND | arr[i]     | left & right    |
| Range OR  | arr[i]     |  left | right   |
--------------------------------------------
*/
