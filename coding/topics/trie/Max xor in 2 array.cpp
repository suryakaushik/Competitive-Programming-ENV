// given 2 arrays arr1,arr2. Pick a from arr1 and b from arr2, such that a^b is maximum

// SUBPROBLEM: Find max xor of a number with all elements of arr
// Insert all numbers of arr(in binary.i.e., one number is a string of 32 bits.in sert each string into the trie) into a trie having links[2]
// Time-->32*arr.length+32
// Space-->2**32 (Depends on arr)


// Note: Similar problem if given q-queries, would also use same approach. Just time complexity will be multiplied by q


// ACTUAL PROBLEM: Insert all elements of arr1 into trie and
// Time-->32*arr1.length+32*arr2.length
// Space-->2**32 (Depends on arr1,arr2)


struct Node
{
    Node *links[2];

    bool containsKey(int ind)
    {
        return (links[ind] != NULL);
    }
    Node *get(int ind)
    {
        return links[ind];
    }
    void put(int ind, Node *node)
    {
        links[ind] = node;
    }
};
class Trie
{
private:
    Node *root;

public:
    Trie()
    {
        root = new Node();
    }

public:
    void insert(int num)
    {
        Node *node = root;
        // cout << num << endl;
        for (int i = 31; i >= 0; i--)
        {
            int bit = (num >> i) & 1;
            if (!node->containsKey(bit))
            {
                node->put(bit, new Node());
            }
            node = node->get(bit);
        }
    }

public:
    int findMax(int num)
    {
        Node *node = root;
        int maxNum = 0;
        for (int i = 31; i >= 0; i--)
        {
            int bit = (num >> i) & 1;
            if (node->containsKey(!bit))
            {
                maxNum = maxNum | (1 << i);
                node = node->get(!bit);
            }
            else
            {
                node = node->get(bit);
            }
        }
        return maxNum;
    }
};
int maxXOR(int n, int m, vector<int> &arr1, vector<int> &arr2)
{
    Trie trie;
    for (int i = 0; i < n; i++)
    {
        trie.insert(arr1[i]);
    }
    int maxi = 0;
    for (int i = 0; i < m; i++)
    {
        maxi = max(maxi, trie.findMax(arr2[i]));
    }
    return maxi;
}