#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector<int>nums;
    stringstream ss;
    string inp;
    getline(cin,inp);
    // cout<<"got input: "<<inp<<endl;
    char delimiter=' '; 
    for(char ch:inp){
        if(ch==delimiter){
            nums.push_back(stoi(ss.str()));
            ss.str(""); // clear the string stream
        }else{
            ss<<ch;
        }
    }
    
    nums.push_back(stoi(ss.str()));
    
    for(int i:nums){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
