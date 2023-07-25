#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "tell the no : ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        sum = sum + (i * i);
    }

    cout << "sum of squares till " << n << " is : " << sum;

    return 0;
}
