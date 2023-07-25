#include <iostream>
using namespace std;

int main()
{
    int min;

    cout << "tell the screen time of the movie in min : ";
    cin >> min;

    cout << int(min / 60) << " Hours " << min % 60 << " min ";

    cout<<endl;

    if (min < 134 && min > 0)
    {
        cout << "you can watch the movie";
    }

    else if (min > 134)
    {
        cout << "you can watch the movie till interval";
    }

    else
    {
        cout << "give valid screen time in min";
    }

    return 0;
}
