// Input: big = "this is a big string", small = ["oath","pea","eat","big strin"], n = size of small-array
// Output: [F,F,F,T]
// Return if the words are present in the big-string

// NAIVE->n*s*b,1
//(b*b+n*s),b*b-->Construct a suffix tree of big-string and for every string in small-arra, check if it is present in suffix tree
// BEST-->(n*s+b*s),n*s-->Construct a tree with all the words in the small-array and at every character in the big-string, check if there is a matching string in the tree

class Solution
{
    struct TrieNode
    {
        TrieNode *children[26];
        string word;

        TrieNode() : word("")
        {
            for (int i = 0; i < 26; i++)
            {
                children[i] = nullptr;
            }
        }
    };

public:
    unordered_map<string, bool> findWords(string &big, vector<string> &small)
    {
        TrieNode *root = buildTrie(small);
        unordered_map<string, bool> result;
        for (int i = 0; i < big.size(); i++)
        {
            for (int j = i; j < big.size(); j++)
            {
                if (root->children[big[j] - 'a'] == nullptr)
                    break;
                root = root->children[big[j] - 'a'];
                if (root->isEnd())
                {
                    result[root->word] = true;
                }
            }
        }
        return result;
    }

    /** Inserts a word into the trie. */
    TrieNode *buildTrie(vector<string> &words)
    {
        TrieNode *root = new TrieNode();
        for (int j = 0; j < words.size(); j++)
        {
            string word = words[j];
            TrieNode *curr = root;
            for (int i = 0; i < word.length(); i++)
            {
                char c = word[i] - 'a';
                if (curr->children[c] == nullptr)
                {
                    curr->children[c] = new TrieNode();
                }
                curr = curr->children[c];
            }
            curr->word = word;
        }
        return root;
    }
};