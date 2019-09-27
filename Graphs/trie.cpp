/*
Trie, also called Prefix Tree

Property:
All descendants of the node have a 
common prefix of the string

Uses:
Autocomplete, spell checker
Good for searching prefix

Complexity:
N: length of the longest word
K: number of children
M: number of words
Height of the trie: N + 1
Inserting: O(N)
Space: O(M*N*K)
*/


//Rep 1
struct TrieNode{
    TrieNode* children[26];
    bool endofWord;
    
    TrieNode(){
        for(int i=0; i<26; i++)
            children[i] = nullptr;
        endofWord = true;
    }
};

//Rep 2
struct TrieNode{
    unordered_map<char, TreeNode*> children;
    bool endofWord;
}

//Inserting into a Trie
void insert(TrieNode* root, string s){
    TrieNode* curr = root;
    for(int i=0; i<s.length(); i++){
        if(curr->children[s[i]-'a'] == nullptr)
            curr->children[s[i]-'a'] = new TrieNode();
        curr = curr->children[s[i]-'a'];
    }
    curr->endofWord = true;
}

//Search prefix
bool isPrefix(TrieNode* root, string pre){
    TrieNode* curr = root;
    for(int i=0; i<pre.length(); i++){
        if(curr->children[pre[i]-'a'] == nullptr)
            return false;
        curr=curr->children[pre[i]-'a'];
    }
    return false;
}

//Search word
bool search(TrieNode* root, string word){
    TrieNode* curr = root;
    for(int i=0; i<word.length(); i++){
        if(curr->children[word[i]-'a'] == nullptr)
            return false;
        curr=curr->children[word[i]-'a'];
    }
    return curr->endOfWord == false;
}
