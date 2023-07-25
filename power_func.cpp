#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, n;
    cout << "enter the base no : " << endl;
    cin >> x;
    cout << "enter the index no : " << endl;

    cin >> n;

    int ans = pow(x, n);
    cout << "the value is " << ans;

    return 0;
}
