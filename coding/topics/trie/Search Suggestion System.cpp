// You are given an array of strings products and a string searchWord.
// Design a system that suggests at most three product names from products after each character of searchWord is typed. Suggested products should have common prefix with searchWord. If there are more than three products with a common prefix return the three lexicographically minimums products.
// Return a list of lists of the suggested products after each character of searchWord is typed.

// Input: products = ["mobile","mouse","moneypot","monitor","mousepad"], searchWord = "mouse"
// Output: [["mobile","moneypot","monitor"],["mobile","moneypot","monitor"],["mouse","mousepad"],["mouse","mousepad"],["mouse","mousepad"]]

struct TrieNode
{
    struct TrieNode *children[26];
    bool eof;
};
TrieNode *createNode()
{
    TrieNode *ret = (TrieNode *)malloc(sizeof(TrieNode));
    ret->eof = false;
    for (int i = 0; i < 26; ++i)
        ret->children[i] = NULL;
    return ret;
}
void insert(TrieNode *root, string key)
{
    TrieNode *temp = root;
    for (char x : key)
    {
        if (temp->children[x - 'a'] == NULL)
            temp->children[x - 'a'] = createNode();
        temp = temp->children[x - 'a'];
    }
    temp->eof = true;
}
TrieNode *search(TrieNode *root, char x)
{
    return root->children[x - 'a'];
}
void find(TrieNode *root, string &key, vector<string> &ret)
{
    if (ret.size() == 3)
        return;
    else
    {
        if (root->eof)
            ret.push_back(key);
        if (ret.size() == 3)
            return;
        for (int i = 0; i < 26; ++i)
            if (root->children[i] != NULL)
            {
                key.push_back(i + 'a');
                find(root->children[i], key, ret);
                key.pop_back();
            }
    }
}
vector<vector<string>> suggestedProducts(vector<string> &products, string searchWord)
{
    TrieNode *root = createNode();
    for (auto key : products)
        insert(root, key);
    vector<vector<string>> ret;
    TrieNode *s = root;
    string str;
    for (char x : searchWord)
    {
        s = search(s, x);
        vector<string> temp;
        if (s != NULL)
        {
            str.push_back(x);
            find(s, str, temp);
        }
        else
        {
            while (ret.size() != searchWord.length())
                ret.push_back(temp);
            break;
        }
        ret.push_back(temp);
    }
    return ret;
}


// ALTERNATE APPROACH-->SORT+BINARY SEARCH-->nlogn,nlogn
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        // vector<vector<string>> res;
        // sort(products.begin(), products.end());
        // int i, j, mid, low, high;
        // for(i = 0; i < searchWord.size(); i++){
        //     string s = searchWord.substr(0, i+1);
        //     low = 0;
        //     high = products.size();
        //     while(low < high){
        //         mid = low + (high - low)/2;
        //         if(products[mid] >= s){
        //             high = mid;
        //         }else{
        //             low = mid + 1;
        //         }
        //     }
        //     vector<string> temp;
        //     for(j = low; j < low + 3 && j < products.size(); j++){
        //         if(products[j].find(s) == 0){
        //             temp.push_back(products[j]);
        //         }else{
        //             break;
        //         }
        //     }
        //     res.push_back(temp);
        // }
        // return res;

        sort(products.begin(), products.end());
        vector<vector<string>> ans;
        int left = 0, right = products.size() - 1;
        for (int i = 0; i < searchWord.length(); i++) {
            vector<string> res;
            char c = searchWord[i];
            while (left <= right && (products[left].length() == i || products[left][i] < c)) left++;
            while (left <= right && (products[right].length() == i || products[right][i] > c)) right--;
            for (int j = 0; j < 3 && left + j <= right; j++)
                res.push_back(products[left+j]);
            ans.push_back(res);
        }
        return ans;
    }
