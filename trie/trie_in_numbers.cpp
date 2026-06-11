class TrieNode{
public:
    TrieNode *child[10];
    TrieNode(){
        for(int i=0;i<10;i++){
            child[i]=nullptr;
        }
    }
};
void insert(TrieNode* root,string s){
    TrieNode* node=root;
    for(int i=0;i<s.size();i++){
        int idx=s[i]-'0';
        if(node->child[idx]==nullptr){
            node->child[idx]=new TrieNode();
        }
        node=node->child[idx];
    }
}

int searchprefix(TrieNode* root,string s){
    TrieNode* node=root;
    int len=0;
    for(int i=0;i<s.size();i++){
        int idx=s[i]-'0';
        if(node->child[idx]!=nullptr){
            node=node->child[idx];
            len++;
        }else{
            break;
        }
    }
    return len;
}
