#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "tell the x coordinate : ";
    cin >> x;

    cout << "tell the y coordinate : ";
    cin >> y;

    //********switch is used for only one variable*******

    // switch (x, y)
    // {
    // case x > 0, y > 0:
    //     cout << "first quadrant " << endl;

    //     break;

    // case x<0, y> 0:
    //     cout << "second quadrant " << endl;

    //     break;

    // case x < 0, y < 0:
    //     cout << "third quadrant " << endl;

    //     break;

    // case x > 0, y < 0:
    //     cout << "fourth quadrant " << endl;

    //     break;

    // default:

    //     cout << "please check the coordinates ";
    //     break;
    // }

    if (x > 0 && y > 0)
    {
        cout << "first quadrant " << endl;
    }

    else if (x < 0 && y > 0)
    {
        cout << "second quadrant " << endl;
    }

    else if (x < 0 && y < 0)
    {
        cout << "third quadrant " << endl;
    }

    else if (x > 0 && y < 0)
    {
        cout << "fourth quadrant " << endl;
    }

    else
    {
        cout << "please check the coordinates ";
    }

    return 0;
}
