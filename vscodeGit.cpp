#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;
static const auto io_sync_off = []() {
    // turn off sync
    std::ios::sync_with_stdio(false);
    // untie in/out streams
    std::cin.tie(nullptr);
    return nullptr;
}();
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
const int maxn = 100000 + 5;
const int mod = 998244353;
bool cmp(int a, int b) { return a > b; }

int main()
{
    io_sync_off;
    int t;
    cin >> t;
    while (t--)
    {
        cout << "This is a test of git from vscode!" << endl;
    }
    cout << "git Failed!" << endl;
    cout << "why?" << endl;

    cout << "git Success!!" << endl;
    cout << "maybe the network failed?" << endl;
    cout << "stash?" << endl;

    cout << "this is a new branch and im tring to merge!" << endl;
    return 0;
}