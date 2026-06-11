class TrieNode{
    boolean isEndOfWord;
    HashMap <Character,TrieNode> children;
    public TrieNode()
    {
        isEndOfWord=false;
        children= new HashMap<>();
    }
}
class Trie {
    private TrieNode root;
    public Trie() {
        root= new TrieNode();
    }
    
    public void insert(String word) {
        TrieNode temp=root;
        for(char c:word.toCharArray())
        {
            if(!temp.children.containsKey(c)){
                temp.children.put(c,new TrieNode());
            }
            temp=temp.children.get(c);
        }
        temp.isEndOfWord=true;
    }
    
    public boolean search(String word) {
        TrieNode cur=root;
        for(char ch:word.toCharArray())
        {
            cur=cur.children.get(ch);
            if(cur==null)
            {
                return false;
            }
        }
    return cur.isEndOfWord;
    }
    
    public boolean startsWith(String prefix) {
        TrieNode cur=root;
        for(char ch:prefix.toCharArray())
        {
            cur=cur.children.get(ch);
            if(cur==null)
            {
                return false;
            }
        }
    return true;
    }
}
