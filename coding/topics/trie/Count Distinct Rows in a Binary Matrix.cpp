// NAIVE-->Compare each row with all the rows before it-->m*m*n

// Using Set-->Time-->(N**2)*log(M)==n**3 to get all substrings and insert all M distinct substrings into set
// Space-->Atmost N**2 distinct substings and each of length N/2-->n**3

// Using Trie-->Time-->n**2 Insert every word into trie, while inserting check if the row is already in trie.
//  Space-->26*n

// CHECK IF nth BIT FROM RIGHT IS SET/NOT-->(num>>n) & 1
// SET/RESET nth BIT FROM RIGHT-->num | (1<<n)
struct Node
{
    Node *links[26];
    bool flag = false;

    bool containsKey(char ch)
    {
        return (links[ch - 'a'] != NULL);
    }
    Node *get(char ch)
    {
        return links[ch - 'a'];
    }
    void put(char ch, Node *node)
    {
        links[ch - 'a'] = node;
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

int countDistinctSubstrings(string &s)
{
    Node *root = new Node();
    int cnt = 0;
    int n = s.size();
    for (int i = 0; i < m; i++)  //m-rows; n-cols/length of each row
    {
        Node *node = root;
        bool flag = false;
        for (int j = i; j < n; j++)
        {
            if (!node->containsKey(s[j]))
            {
                node->put(s[j], new Node());
                flag = true;
            }
            node = node->get(s[j]);
        }
        if (flag)
            cnt++;
    }
    return cnt;
}