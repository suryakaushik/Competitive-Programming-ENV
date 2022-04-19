// Given arr and x, find mazx xor between x and any one ele of arr. Given q-queries (xi,ai), such that only elements less than than ai inside array must be considered.

// Soln1: For each query, Insert all elements of arr till ai into new trie. And identify max xor between trie and xi
// Time-->q*(32*arr.length+32), Space-->q*(2**32)

// Better Solution is OFFLINE QUERIES:
// Sort all queries according to ai, First insert elements till the 1st ai into the trie and identify max xor between trie and xi.
// Then insert elements of array till next ai and identify max xor between trie and xi.
// Time-->32*arr.length+arr.length, Space-->(2**32)