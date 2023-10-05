// Naive-->update is 1,1 and rangeSum is n,1
// Prefix Sum-->update is n,1 and rangeSum is 1,1
// Segment Tree-->4*logn,4*n
// BIT or Fenwick-->update is logn,1 and rangeSum is logn,1
int n;
int fen[n];

// Update value at an index
void update(int i, int val) //val is difference between current and new value
{
    while (i < n)
    {
        fen[i] += val;
        i += (i & (-i));
    }
}

// Prefix Sum upto an index
int sum(int i)
{
    int s = 0;
    while (i > 0)
    {
        s += fen[i];
        i -= (i & (-i));
    }
    return s;
}

// SPECIAL OPERATION IS-->find the max. index whose prefix sum is less than given sum(k)
// Naive-->n,1
// BIT-->logn*logn,1
int binary_search(int v) // v is the value we are searching
{
    int l = 1, r = N;
    while (l != r)
    {
        int mid = (l + r) / 2;
        if (sum(mid) < v)
            l = mid + 1;
        else
            r = mid;
    }
    return l;
}

// BIT with Binary Lifting-->logn,1
int find(int k)
{
    int curr = 0, ans = 0, prevSum = 0;
    for (int i = log2(n); i >= 0; i--)
    {
        if (ft[curr + (1 << i)] + prevSum < k)
        {
            curr += (1 << i);
            prevSum += ft[curr];
        }
    }
    return (curr + 1);
}