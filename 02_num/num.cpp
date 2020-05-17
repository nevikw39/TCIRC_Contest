#include <bits/stdc++.h>
using namespace std;
const string digits[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"},
             tys[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
const string num_to_words(int x)
{
    if (x < 0)
        return "minus " + num_to_words(-x);
    if (x == 0)
        return "zero";
    if (x < 20)
        return digits[x];
    if (x < 100)
        return tys[x / 10] + ((x % 10) ? '-' + num_to_words(x % 10) : "");
    if (x < 1000)
        return digits[x / 100] + " hundred" + ((x % 100) ? ' ' + num_to_words(x % 100) : "");
    if (x < 1000000)
        return num_to_words(x / 1000) + " thousand" + ((x % 1000) ? ' ' + num_to_words(x % 1000) : "");
    if (x < 1000000000)
        return num_to_words(x / 1000000) + " million" + ((x % 1000000) ? ' ' + num_to_words(x % 1000000) : "");
    if (x < 1000000000000)
        return num_to_words(x / 1000000000) + " billion" + ((x % 1000000000) ? ' ' + num_to_words(x % 1000000000) : "");
    return "error";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cout << num_to_words(n) << '\n';
    return 0;
}