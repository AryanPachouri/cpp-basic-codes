#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter the no you want to check : " << endl;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "the no is even ";
    }

    else
    {
        cout << "the no is odd ";
    }

    return 0;
}
