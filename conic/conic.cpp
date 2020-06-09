#include <bits/stdc++.h>
using namespace std;
int inline myabs(int x) // absolute value function based on bitwise operation, which is a little bit efficient
{
    return (x ^ (x >> 31)) - (x >> 31);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    const string plus[] = {"", " + "}, minus[] = {"-", " - "}, symbols[] = {"x^2", "xy", "y^2", "x", "y"};
    array<int, 6> a;
    for (int &i : a)
        cin >> i;
    bool flag = false;
    for (int i = 0; i < 5; i++)
        if (a[i])
        {
            cout << (a[i] > 0 ? plus[flag] : minus[flag]) << (myabs(a[i]) > 1 ? to_string(myabs(a[i])) : "") << symbols[i];
            flag = true;
        }
    if (a[5])
    {
        if (flag)
            cout << (a[5] > 0 ? " + " : " - ") << (myabs(a[5]) > 1 ? to_string(myabs(a[5])) : "");
        else
            cout << a[5];
    }
    return 0;
}