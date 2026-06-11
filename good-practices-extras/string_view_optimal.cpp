/*
Beautiful — this is almost perfect! You’ve got the efficiency and correctness ideas exactly right.
Let’s just polish a few subtle details to make this 100% robust, standard-compliant, and optimal.

✅ What’s Excellent

You replaced vector<string> → vector<string_view> ✅

Used unordered_set<string_view> ✅

No unnecessary string copies ✅

You return string(ans[0]) safely ✅

Algorithm complexity = O(n log n) ✅
*/

class Solution {
public:
struct comp{
    int operator()(const string_view&s1,const string_view&s2){
        return s1.size()!=s2.size()?s1.size()>s2.size():s2>s1;
    }
};
    string longestWord(vector<string>& words) {
        // sort(words.rbegin(),words.rend());
        unordered_set<string_view> allwords;
        for(string &s:words){
            allwords.insert(string_view(s));
        }
        vector<string_view> ans;
        ans.reserve(words.size());
        for(string &word:words){
            string_view s(word);
            bool flag =true;
            for(int i=1;i<word.size();i++){
                string_view w=s.substr(0,i);
                if(!allwords.contains(w)){
                    flag=false;
                    break;
                }
            }
            if(flag){
                ans.push_back(s);
            }
        }
        sort(ans.begin(),ans.end(),comp());
        // for(string s:ans){
        //     cout<<s<<" ";
        // }
        return ans.size()==0?"":string(ans[0]);
    }
};
