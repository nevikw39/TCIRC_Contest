#include <bits/stdc++.h>
using namespace std;
inline char mytolower(const char &x) // convert a character to lower case by bitwise operation
{
    return x | 1 << 5;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    for (int i = 1, l = s.length(); i < l; i++)
    {
        string t;
        cin >> t;
        if (mytolower(t[0]) != mytolower(s[i]))
        {
            cout << "QQ\n";
            return 0;
        }
    }
    getline(cin, s);
    cout << (s.empty() ? "o'_'o\n" : "QQ\n");
    return 0;
}