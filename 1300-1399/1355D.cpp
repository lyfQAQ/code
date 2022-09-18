#include <bits/stdc++.h>

using namespace std;
using LL = long long;
using PII = pair<int, int>;

constexpr int N = 205;

void Solve()
{
    int n, s;
    cin >> n >> s;
    if(s / n - 1 <= 0)
    {
        puts("NO");
        return;
    }
    vector<int> a(n, s / n);
    for(int i = 0, j = 0; i < s % n; i++, j++) a[j]++;
    puts("YES");
    for(int x : a) cout << x << " ";
    cout << "\n" << s / n - 1 << "\n";
}
int main()
{
    int T;
    // cin >> T;
    T = 1;
    while (T--)
    {
        Solve();
    }
}
