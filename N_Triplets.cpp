#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
int main()
{
    int t, c = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (isPrime(n))
        {
            cout << -1 << endl;
            continue;
        }
        int i = 2;

        for (; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << 1 << " " << i << " " << n / i << endl;
                break;
            }
        }

        // i = 2;
        // n = c;
        // for (; i * i <= k; i++)
        // {
        //     if (n % i == 0)
        //     {
        //         if (k % (a * b * i) == 0 && k % (a * c * i) == 0)
        //         {
        //             a *= i;
        //             break;
        //         }
        //         else if (k % (a * b * i) == 0 && k % (b * c * i) == 0)
        //         {
        //             b *= i;
        //             break;
        //         }
        //         else if (k % (c * b * i) == 0 && k % (a * c * i) == 0)
        //         {
        //             c *= i;
        //             break;
        //         }
        //     }
        // }

        // cout << a << " " << b << " " << c << endl;
    }

    return 0;
}
