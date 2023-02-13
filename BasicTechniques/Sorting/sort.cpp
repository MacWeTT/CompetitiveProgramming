#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> v = {4, 2, 5, 3, 5, 8, 3};
    sort(v.begin(), v.end());   // Ascending Sort
    sort(v.rbegin(), v.rend()); // Descending Sort

    int n = 7;
    int a[] = {4, 2, 5, 3, 5, 8, 3};
    sort(a, a + n);

    string s = "monkey";
    sort(s.begin(), s.end());
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}