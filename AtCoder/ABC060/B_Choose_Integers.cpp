#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool y = false;
    rep(i, 1, b + 1)
    {
        if (a * i % b == c)
            y = true;
    }
    cout << (y?"YES":"NO");
    return 0;
}