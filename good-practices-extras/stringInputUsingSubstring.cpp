#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector<int>nums;
    string ans;
    getline(cin,ans);
    int start=0;
    int i=0;
    for(;i<ans.size();i++){
        char ch=ans[i];
        if(ch==' '){
            string sub=ans.substr(start,i-start);
            nums.push_back(stoi(sub));
            start=i+1;
        }
    }
    
    nums.push_back(stoi(ans.substr(start,i-start)));
    
    for(int i:nums){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
