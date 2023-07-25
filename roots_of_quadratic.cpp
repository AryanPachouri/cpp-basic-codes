#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b, c;

    cout << "enter the coefficient of X^2 : " << endl;
    cin >> a;

    cout << "enter the coefficient of X : " << endl;
    cin >> b;

    cout << "enter the constant term : " << endl;
    cin >> c;

    cout << "first root of quadratic is : " << (-b + sqrt(pow(b, 2) - (4 * a * c))) / 2 * a << endl;
    cout << "second root of quadratic is : " << (-b - sqrt(pow(b, 2) - (4 * a * c))) / 2 * a << endl;

    return 0;
}
