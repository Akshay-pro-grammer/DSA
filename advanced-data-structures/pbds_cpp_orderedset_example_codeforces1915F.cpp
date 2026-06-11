#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>>ans(n);
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            ans[i]={a,b};
        }
        sort(ans.begin(),ans.end());
        long long count=0;
        ordered_set oset;
        for(auto [s,e]:ans){
            int index=oset.order_of_key(e);
            int nums=oset.size()-index;
            count+=nums;
            oset.insert(e);
        }
        cout<<count<<'\n';
    }
    return 0;
}
