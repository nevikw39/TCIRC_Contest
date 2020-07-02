#include <bits/stdc++.h>
using namespace std;
int f(int n)
{
    if (n < 3)
        return 1;
    return (f(n - 1) + f(n - 2)) % int(1e9 + 7);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cout << f(n + 2) - 1 << '\n';
    return 0;
}