#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int factorial = 1;

    cout << "tell the no : ";
    cin >> n;

    if (n > 0)
    {

        for (int i = 1; i < n + 1; i++)
        {
            factorial = (factorial)*i;
        }

        cout << "\nfactorial of " << n << " is : " << factorial;
    }

    else if (n == 0)
    {
        cout << "\nfactorial of 0 is : 1 ";
    }

    else
    {
        cout << "can not be calculated ";
    }

    return 0;
}

