#include <bits/extc++.h>
using namespace std;
using namespace __gnu_pbds;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int32_t a, b;
    cin >> a >> b;
    cout << b / __gcd(a, b) << '\n';
    return 0;
}