#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    constexpr int M = 1e9+7;
    cin >> n;
    if (!n)
    {
        cout << "0\n";
        return 0;
    }
    int a = 0, b = 1, sum = 1;
    for (int i = 1; i < n; i++)
    {
        int t = (a + b) % M;
        a = b;
        b = t;
        sum = (sum + t) % M;
    }
    cout << sum << '\n';
    return 0;
}