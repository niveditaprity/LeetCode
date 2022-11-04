class Trie {
    
    struct TrieNode{
        TrieNode*child[26];
        bool flag=false;
        bool containChar(char ch)
        {
         return child[ch-'a']!=NULL;
        }
        void putNode(char ch,TrieNode*node)
        {
            child[ch-'a'] = node;
        }
        TrieNode*getNode(char ch)
        {
           return child[ch-'a']; 
        }
        void setEnd()
        {
            flag = true;
        }
       bool isEnd()
        {
            return flag;
        }
    };
public:
    TrieNode*root;
    Trie() {
       root = new TrieNode(); 
    }
    
    void insert(string word) {
      TrieNode *node = root;
		for (int i = 0; i < word.size(); i++) {
			if (!node->containChar(word[i])) {
				node->putNode(word[i], new TrieNode());
			}
			//moves to reference trie
			node = node->getNode(word[i]);
		}
		node->setEnd();
    }
    
    bool search(string word) {
        TrieNode*node = root;  
      for(int i=0;i<word.size();i++)
      {
          if(!node->containChar(word[i]))
          {
              return false;
          }
          node = node->getNode(word[i]);
      }
        return node->isEnd();
    }
    
    bool startsWith(string prefix) {
        TrieNode*node = root;
     for(int i=0;i<prefix.size();i++)
      {
          if(!node->containChar(prefix[i]))
          {
              return false;
          }
          node = node->getNode(prefix[i]);
      }
        return true;
       
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
